class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        //brute force approach
        //time complexity : O(n)
        //space complexity : O(n)

        unordered_map<int, int> mp;

        for(auto &it : nums){
            mp[it]++;
        }

        int ans;

        for(auto &it : mp){
            if(it.second > (n/2)){
                ans = it.first;
                break;

            }
        }

        return ans;
        
    }
};