class Solution {
public:
    int MOD = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {

        
        
        int n = arr.size();

        sort(arr.begin(), arr.end());

        unordered_map<int, long long> mp;

        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }


        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){
                if(arr[i]%arr[j] == 0 && mp.find(arr[i]/arr[j]) != mp.end()){
                     
                    mp[arr[i]] = (mp[arr[i]]+ mp[arr[j]]*mp[arr[i]/arr[j]]);
                }
            }
        }

        long long cnt = 0;

        for(int i = 0; i<n; i++){
            cnt = (cnt+mp[arr[i]]) % MOD;
        }

        return cnt;
        
    }
};