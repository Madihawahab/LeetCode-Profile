class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();

        //brute force


        if(n == 0){
            return "";
        }
        if(n == 1){
            return strs[0];
        }

        map<pair<char, int>, int> mp;

        string st = strs[0];
        for(int i = 0; i<st.size(); i++){  
            mp[{st[i], i}]++; 
        }

        
        int longest = INT_MAX;

        for(int i = 1; i<n; i++){
            int cnt = 0;
            string s = strs[i];
            for(int j = 0; j<strs[i].size(); j++){
                if(mp.find({s[j], j}) != mp.end()){
                    cnt++;
                }else{
                    break;
                }
            }
            longest = min(longest, cnt);
        }

        string ans = "";
        for(int i = 0; i<longest; i++){
                ans += st[i];
        }

        return ans;
       
    }
};