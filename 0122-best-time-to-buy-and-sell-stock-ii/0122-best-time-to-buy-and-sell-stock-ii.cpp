class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        if(n == 0 || n == 1){
            return 0;
        }
        int minm = INT_MAX;
        int buy_day;

        int profit = 0;
        int sell_day;
        bool sell = false;
        bool buy = false;
        for(int i = 0; i<n; i++){
        
            if(i == n-1 && buy){
                profit += prices[i] - minm;
                break;
            }else if(i == n-1){
                return profit;
            }
            if(!buy && prices[i]<prices[i+1]){
                minm = prices[i];
                buy_day = i;
                buy = true;
            }
            if(buy && i>buy_day && prices[i]>prices[i+1]){
                profit += prices[i] - minm;
                sell_day = i;
                sell = true;
                buy = false;
            }

            if(sell && prices[i] < prices[i+1]){
                minm = prices[i];
                buy_day = i;
                buy = true;
                sell = false;
            }
        }

        return profit;
    }
};