class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
       //optimal approach - boyer moore
       //time complexity : O(n)
       //space complexity : O(1)
        int count = 0;
        int maj = NULL;

        for(int i = 0; i<n; i++){

            if(count == 0){
                count = 1;
                maj = nums[i]; //assume
            }else if(nums[i] == maj){
                count++;
            }else{
                count--;
            }
        }

        return maj;
        
    }
};