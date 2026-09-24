class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        //brute force

        unordered_map<int, int> mp;

        for(auto &it : nums){
            mp[it]++;
        }

        vector<pair<int, int>> vec;

        for(auto &it : mp){
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), [](pair<int, int> p1, pair<int, int> p2){
            return p1.second>p2.second;
        });
        vector<int> ans;
        for(int i = 0; i<k; i++){
            pair<int, int> p = vec[i];
            ans.push_back(p.first);
        }
        return ans;
    }
};