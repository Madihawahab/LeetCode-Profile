class Solution {
public:

    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int cnt = 1;
        int longest = 1;

        

        for(int i = 0; i<n-1; i++){
            if(nums[i+1] == nums[i] + 1){
                cnt++;
                longest = max(longest, cnt);
            }else if(nums[i] == nums[i+1]){
                continue;
            }else{
                cnt = 1;
            }
        }

        return longest;
    }
};