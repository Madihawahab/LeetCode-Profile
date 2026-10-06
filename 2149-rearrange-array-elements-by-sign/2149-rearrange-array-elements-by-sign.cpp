class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        int i = 0;
        int pi = 0;
        int ni = pi+1;

        while(i<n && (pi<n || ni<n)){
            if(nums[i]>0){
                result[pi] = nums[i];
                pi+=2;
            }else{
                result[ni] = nums[i];
                ni+=2;
            }
            i++;
        }
        return result;
    }
};