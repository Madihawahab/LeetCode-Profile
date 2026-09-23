class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        vector<int> ans;

        for(int i = 0; i<n; i++){
            if(val != nums[i]){
                ans.push_back(nums[i]);
            }
        }
        
        nums.clear();

        for(int i = 0; i<ans.size(); i++){
            nums.push_back(ans[i]);
        }
        return nums.size();
    }
};