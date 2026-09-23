class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<int> ans;

        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            int find = target - nums[i];
            if(mp.find(find) == mp.end()){
                mp[nums[i]] = i;
            }else{
                ans.push_back(i);
                ans.push_back(mp[find]);
            }  
        }
        return ans;
    }
};