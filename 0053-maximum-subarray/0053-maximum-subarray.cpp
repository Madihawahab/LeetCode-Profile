class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        //to find the maximum sum possible
        int max_so_far = nums[0];

        //to store the maximum at a position
        int curr_max = nums[0];

        for(int i = 1; i<n; i++){

            //equivalent to step 3
            curr_max = max(nums[i], nums[i]+curr_max);

            //equivalent to step 4
            max_so_far = max(curr_max, max_so_far);

        }

        return max_so_far;

    }
};