class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        //Brute Force
        //time complexity : O(n)
        //space somplexity : O(n)

        unordered_map<int, int> mp;

        for(auto &it : nums){
            mp[it]++;
        }

        vector<int> ans;

        for(auto &it : mp){
            if(it.second > (n/3)){
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};