class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

         //time complexity : O(n)
        //space complexity : O(1)

        int sum = n*(n+1)/2;

        for(int i = 0; i<n; i++){
            sum = sum - nums[i];
        }

        return sum;
    }
};