class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> freq;

        for(int i = 0; i<n; i++){
            freq[nums[i]]++;
        }

         int result = 0;

        for(auto &it : freq){

            int cnt = it.second;

            result += (cnt*(cnt-1))/2;

       }

       return result;
        
    }
};