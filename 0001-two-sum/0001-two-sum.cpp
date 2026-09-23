class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        //brute force
        //time complexity : O(n^2)
        //space complexity : O(1)

        vector<int> ans;

        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if(!ans.empty()){
                break;
            }
        }
        return ans;
    }
};