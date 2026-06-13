class Solution {
public:

    bool checkPalindrome(string& s, int i, int j){
        //base case
        if(i>=j){
            return true;
        }


        //recursive case
        if(isalnum(s[i]) && isalnum(s[j])){
            if(s[i] == s[j]){
                return checkPalindrome(s, i+1, j-1);
            }else{
                return false;
            }
        }else{
            if(isalnum(s[i])){
                return checkPalindrome(s, i, j-1);
            }else{
                return checkPalindrome(s, i+1, j);
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        int n = s.size();

        for(char& c : s){
            c = tolower(c);
        }

        return checkPalindrome(s, 0, n-1);
        
    }
};