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

        vector<int> rev;
        for(int i = 0; i<n; i++){
            rev.push_back(nums[i] - reverse(nums[i]));
        }

        unordered_map<int, int> mp;
        int result = 0;
        for(auto &it : rev){
            result = (result + mp[it])%MOD;
            mp[it]++;
        }

        return result;

    }
};