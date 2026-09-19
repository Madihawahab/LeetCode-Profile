class Solution {
public:
    bool isAnagram(string s, string t) {

        int n =  s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        unordered_map<int, int> mps;
        unordered_map<int, int> mpt;

        for(auto &it : s){
            mps[it]++;
        }

        for(auto &it : t){
            mpt[it]++;
        }

        for(int i = 0; i<n; i++){
            if(mpt.find(s[i]) != mpt.end()){
                if(mps[s[i]] != mpt[s[i]]){
                    return false;
                }
            }else{
                return false;
            }
        }

        return true;
        
    }
};