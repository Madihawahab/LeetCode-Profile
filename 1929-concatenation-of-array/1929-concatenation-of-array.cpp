class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        //optimal approach
        //time complexity : O(n)
        //space complexity : O(1);


        for(int i = 0; i<n; i++){
            nums.push_back(nums[i]);
        }
        
        return nums;
    }
};