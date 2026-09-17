class Solution {
public:
    int MOD = 1e9 + 7;
    int reverse(int a){
        int num = 0;
        while(a){
        int rem = a%10;
        num = 10*num + rem;
        a /= 10;
        }

        return num; 

    }

    int countNicePairs(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i<n; i++){
            nums[i] = (nums[i] - reverse(nums[i]));
        }

        unordered_map<int, int> mp;
        int result = 0;
        for(auto &it : nums){
            result = (result + mp[it])%MOD;
            mp[it]++;
        }

        return result;

    }
};