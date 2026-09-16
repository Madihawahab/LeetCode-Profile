class Solution {
public:
    string frequencySort(string s) {

        int n = s.size();

        unordered_map<char, int> mp;

        for(auto &it : s){
            mp[it]++;
        }

        vector<pair<char, int>> vec;

        for(auto &it : mp){

            vec.push_back({it.first, it.second});

        }

        auto lambda = [](pair<char, int> p1, pair<char, int> p2){
            return p1.second>p2.second;
        };

        
            sort(vec.begin(), vec.end(), lambda);

            string ans = "";
            for(auto &it : vec){
                int i = it.second;
                while(i--){
                    ans += it.first;
                } 
            }

        return ans;
        
    }
};