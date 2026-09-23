class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        vector<int> ans;

        int k = 0;
        int del = 0;
        for(int i = 0; i<n; i++){
            if(val != nums[i]){
                nums[k] = nums[i];
                k += 1;
            }else{
                del++;
            }
        }

        for(int i = 0; i<del; i++){
            nums.pop_back();
        }

        
        return nums.size();
    }
};