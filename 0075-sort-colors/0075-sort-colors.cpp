class Solution {
public:

    int partition(vector<int>& nums, int s, int e){

        int randomIndex = s+rand()%(e-s+1);

        swap(nums[randomIndex], nums[e]);

        int pivot = nums[e];

        int i = s-1;
        int j = s;

        while(j<e){

            if(nums[j] < pivot){
                i++;
                swap(nums[i], nums[j]);
            }
            j++;
        }
        swap(nums[i+1], nums[e]);

        return i+1;

    }

    void qs(vector<int>& nums, int s, int e){

        if(s>=e){
            return;
        }

        int pidx = partition(nums, s, e);

        qs(nums, s, pidx-1);
        qs(nums, pidx+1, e);

    }

    
    void sortColors(vector<int>& nums) {

        int n = nums.size();

        qs(nums, 0, n-1);
    }
};