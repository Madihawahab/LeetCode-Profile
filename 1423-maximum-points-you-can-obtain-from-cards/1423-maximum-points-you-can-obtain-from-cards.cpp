class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        long long lsum = 0;
        long long rsum = 0;
        long long maxSum = 0;

        for(int i = 0; i<=k-1; i++){
            lsum += cardPoints[i];
            maxSum = lsum;
        } 

        int rindex = n-1;
        for(int i = k-1; i>=0; i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[rindex];
            rindex -= 1;

            maxSum = max(maxSum, lsum+rsum);
        }
        return maxSum;
    }
};