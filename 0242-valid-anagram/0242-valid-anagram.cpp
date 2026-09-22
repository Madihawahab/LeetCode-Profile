class Solution {
public:
    bool isAnagram(string s, string t) {

        //to make this same code work for unicode just create a vector of 128 size this will cover all unicode characeters
        vector<int> count(26, 0);


        for(char &ch : s){
            count[ch - 'a']++;
        }

        for(char &ch : t){
            count[ch - 'a']--;
        }

        //check if all elements in a count are zero

        //using lambda function for this

        bool allZeros = all_of(count.begin(), count.end(), [](int element){
            return element == 0;
        });

        return allZeros;
       
    }
};