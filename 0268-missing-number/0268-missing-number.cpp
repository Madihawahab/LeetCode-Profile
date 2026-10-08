class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        //time complexity : O(n)
        //space complexity :O(n)

        vector<bool> temp(n+1, false);

        for(int i = 0; i<n; i++){
            temp[nums[i]] = true;
        }

        for(int i = 0; i<n; i++){
            if(!temp[i]){
                return i;
            }
        }

        return n;
    }
};