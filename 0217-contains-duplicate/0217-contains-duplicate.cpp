class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();
        //optimal approach
        //time complexity : O(n) (worst case i.e., no duplicate)
        //space complexity : O(n) (worst case i.e., no duplicate)
        
        unordered_map<int, int> mp;

        for(int i = 0; i<n; i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]]++;
            }else{
                return true;
            }
        }
        return false;
    }
};