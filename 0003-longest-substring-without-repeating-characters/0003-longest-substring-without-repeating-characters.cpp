class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        int maxLen = 0;
        int cnt = 0;
        
        for(int i = 0; i<n; i++){
            int hash[256] = {0};
            for(int j = i; j<n; j++){
                if(hash[s[j]] == 0){
                cnt+=1;
                hash[s[j]]++;
            }else{
                break;
            }
            }
           maxLen = max(maxLen, cnt);
                cnt = 0;
        }
        return maxLen;
    }
};