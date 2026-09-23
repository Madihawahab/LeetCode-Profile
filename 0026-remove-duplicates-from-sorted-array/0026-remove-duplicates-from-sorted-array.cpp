class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        int del = 0;

        int i = 0; 
        int j = i+1;
        while(i<n && j<n){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                j++;
            }else{
                j++;
                del++;
            }
        }

        for(int i = 0; i<del; i++){
            nums.pop_back();
        }

        return nums.size();
        
    }
};