class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        //brute force appraoch
        //time complexity : O(n)
        //space complexity : O(2n)
        
        vector<int> ans(2*n);

        for(int i = 0; i<n; i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        
        return ans;
    }
};