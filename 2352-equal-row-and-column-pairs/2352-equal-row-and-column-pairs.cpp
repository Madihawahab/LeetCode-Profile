class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n = grid.size();
        
        map<vector<int>, int> mp;
        int cnt = 0;

        for(int r = 0; r<n; r++){
            mp[grid[r]]++;
        }

        for(int c = 0; c<n; c++){
            vector<int> temp;
            for(int r = 0; r<n; r++){
                temp.push_back(grid[r][c]);
            }

            cnt += mp[temp];
        }

        return cnt;
        
    }
};