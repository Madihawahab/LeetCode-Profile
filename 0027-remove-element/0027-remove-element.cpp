class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
         int n = nums.size();

        vector<int> s;
        for(int i = 0; i<n; i++){
            if(nums[i] != val){
                s.push_back(nums[i]);
            }
        }
        
        nums.clear();

        for(int i = 0; i<s.size(); i++){
            nums.push_back(s[i]);
        }

        return nums.size();

    }
    
};