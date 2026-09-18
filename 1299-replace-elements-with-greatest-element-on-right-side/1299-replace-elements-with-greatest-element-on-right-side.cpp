class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();

        int grt;
        int i, j;
        for(i = 0; i<n; i++){
            if(i<n-1){
                grt = arr[i+1];
            for(j = i; j<n; j++){
                if(j<n-1){
                    if(grt<arr[j+1]){
                    grt = arr[j+1];
                }
                }
                
            }
            if(j == n){
                arr[i] = grt;
            }
            } else{
            arr[i] = -1;
        }
            
        }
       

        return arr;
    }
};