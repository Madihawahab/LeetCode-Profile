class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int n = nums.size();

        //better approach
        //time complexity : O(2n)
        //space complexity : O(n)

        vector<int> ans;
        
        unordered_map<int, int> mp;
        for(auto &it : nums){
            mp[it]++;
        }

        for(auto &it : mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};