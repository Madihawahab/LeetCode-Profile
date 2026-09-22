class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        //better appraoch
        //time complexity: O(nlogn)
        //space complexity: O(1)

        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};