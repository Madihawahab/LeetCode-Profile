class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        unordered_map<int, int> mp;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                mp[grid[i][j]]++;
            }
        }

        vector<int> ans;

        for(auto &it : mp){
            if(it.second > 1){
                ans.push_back(it.first);
                break;
            }
        }

        for(int i = 1; i<=n*n; i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};