class Solution {
public:

    void merge(vector<int>& nums, int s, int m, int e){
        int i = s;
        int j = m+1;
        int k = s;

        vector<int> ans;
        while(i<=m && j<=e){
            if(nums[i]<=nums[j]){
                ans.push_back(nums[i]);
                i++;
            }else{
                ans.push_back(nums[j]);
                j++;
            }
        }

        while(i<=m){
            ans.push_back(nums[i]);
            i++;
        }

        while(j<=e){
            ans.push_back(nums[j]);
            j++;
        }

        int n = ans.size();
    
        for(int i = 0; i<n; i++){
            nums[s+i]= ans[i];
        }
    }

    void mergeSort(vector<int>& nums, int s, int e){

        if(s >= e){
            return;
        }

        int m = s+((e-s)/2);

        mergeSort(nums, s, m);
        mergeSort(nums, m+1, e);

        merge(nums, s, m, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        mergeSort(nums, 0, n-1);

        return nums;
        
    }
};