class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();

        
        int i, j;
        for(i = 0; i<n-1; i++){
            int grt = INT_MIN;
            for(j = i+1; j<n; j++){
                if(grt<=arr[j]){
                    grt = arr[j];
                }
            }
            arr[i] = grt;
        }
        if(i == n-1){
            arr[i] = -1;
        }

        return arr;
    }
};