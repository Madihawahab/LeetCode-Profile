class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> freq;
        int result = 0;
        
        for(auto &num : nums){
            if(freq.find(num) != freq.end()){
                result += freq[num];
            }
           
            freq[num]++;
        }

        return result;
        
    }
};