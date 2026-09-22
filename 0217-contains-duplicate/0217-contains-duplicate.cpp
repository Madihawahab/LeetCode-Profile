class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        //optimal aapraoch
        //time complexity : O(n)
        //space complexity : O(n)

        unordered_map<int, int> mp;

        for(auto &it : nums){
            mp[it]++;
        }

        for(auto &it : mp){
            if(it.second>1){
                return true;
            }
        }

        return false;
        
    }
};