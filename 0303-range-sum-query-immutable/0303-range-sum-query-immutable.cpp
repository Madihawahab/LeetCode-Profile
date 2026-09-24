class NumArray {
public:

    vector<int> nums;
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        this->nums = nums;

         int sum = 0;
            for(int i = 0; i<nums.size(); i++){
                sum += nums[i];
                prefix.push_back(sum);
            }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        if(left == 0){
            sum += prefix[right];
        }else{
            sum += prefix[right] - prefix[left-1];
        }

        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */