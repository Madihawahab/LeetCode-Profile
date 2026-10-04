class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int leftProd = 1;
        int rightProd = 1;

        int ans = INT_MIN;

        for(int i = 0; i<n; i++){

            //if any leftProd or rightProd become 0 then update it
            leftProd = leftProd == 0 ? 1 : leftProd;
            rightProd = rightProd == 0 ? 1 : rightProd;

            //prefix product
            leftProd *= nums[i];
            rightProd *= nums[n-1-i];

            ans = max(ans, max(leftProd, rightProd));

        }

        return ans;

    }
};