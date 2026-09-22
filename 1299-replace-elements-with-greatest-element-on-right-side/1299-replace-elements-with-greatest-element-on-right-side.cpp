class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();

        //optimal approach
        //time complexity : O(n)
        //space complexity : O(1)

        int grt = -1;

        int curr;

        for(int i = n-1; i>=0; i--){
            curr = arr[i];
            arr[i] = grt;
            if(grt<=curr){
                grt = curr;
            }
        }

        return arr;

    }
};