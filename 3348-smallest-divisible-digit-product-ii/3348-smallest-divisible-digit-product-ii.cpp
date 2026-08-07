class Solution {
public:
       typedef long long ll;

//------------------------------------------------------------
// Creates the smallest suffix of exactly 'length' digits
// whose digit product is divisible by 'required'.
//
// Idea:
// 1. Greedily divide required using digits 9 -> 2.
//    Bigger digits absorb more prime factors, so they minimize
//    the number of digits required.
// 2. If fewer than 'length' digits are used, pad with '1'
//    because 1 doesn't change the product.
// 3. Reverse because digits were collected in decreasing order;
//    reversing makes the suffix lexicographically smallest.
//------------------------------------------------------------
string freeSlotsFiller(ll required, int length) {

    string str;

    // Pack the required prime factors using largest digits first.
    for (int digit = 9; digit >= 2; digit--) {

        while (required % digit == 0) {
            str.push_back(digit + '0');
            required /= digit;
        }
    }

    // Fill remaining positions with 1's.
    while (str.length() < length)
        str.push_back('1');

    // Make the resulting number as small as possible.
    reverse(str.begin(), str.end());

    return str;
}

string smallestNumber(string num, long long t) {

    int n = num.length();

    //------------------------------------------------------------
    // Step 1:
    // If t contains any prime factor other than
    // 2,3,5,7 then it is impossible because
    // digits (1...9) can only generate these primes.
    //------------------------------------------------------------
    ll temp = t;

    for (int prime : {2,3,5,7}) {

        while (temp % prime == 0)
            temp /= prime;
    }

    if (temp != 1)
        return "-1";

    //------------------------------------------------------------
    // remainingFactor[i]
    //
    // Meaning:
    // After fixing the first i digits of num,
    // how much of t is still missing?
    //------------------------------------------------------------
    vector<ll> remainingFactor(n + 1, t);

    for (int i = 0; i < n; i++) {

        int digit = num[i] - '0';

        // Prefix cannot continue after first zero.
        if (digit == 0)
            break;

        remainingFactor[i + 1] =
            remainingFactor[i] /
            gcd(remainingFactor[i], (ll)digit);
    }

    //------------------------------------------------------------
    // Entire number already satisfies the condition.
    //------------------------------------------------------------
    if (remainingFactor[n] == 1)
        return num;

    //------------------------------------------------------------
    // We only need to search until the first zero.
    // After replacing that zero with 1..9,
    // the suffix can be freely rebuilt.
    //------------------------------------------------------------
    int zeroPos = num.find('0');

    int zeroIdx = n - 1;

    if (zeroPos != -1)
        zeroIdx = zeroPos;

    //------------------------------------------------------------
    // Greedy:
    // Move from right to left.
    // Try increasing one digit.
    //------------------------------------------------------------
    for (int i = zeroIdx; i >= 0; i--) {

        // Product still required after keeping prefix.
        ll required = remainingFactor[i];

        // Digits available after position i.
        int freeSlots = n - 1 - i;

        // Try every larger digit.
        for (int digit = (num[i] - '0') + 1;
             digit <= 9;
             digit++) {

            // Current digit contributes some prime factors.
            ll furtherRequired =
                required / gcd(required, (ll)digit);

            // Build the smallest possible suffix.
            string requiredNumber =
                freeSlotsFiller(furtherRequired,
                                freeSlots);

            // If suffix fits, this is the answer.
            if (requiredNumber.length() == freeSlots) {

                return num.substr(0, i)
                     + char(digit + '0')
                     + requiredNumber;
            }
        }
    }

    //------------------------------------------------------------
    // No answer of the same length exists.
    // Build the smallest answer with one extra digit.
    //------------------------------------------------------------
    return freeSlotsFiller(t, n + 1);
}
};