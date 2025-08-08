class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int k = 0;
        int result = 0;
        for(int i = 1;i<prices.size();i++){
            if(prices[i] - prices[k] > result){
                result = prices[i] - prices[k];
            }
            if(prices[i] < prices[k]){
                k = i;
            }
        }
    return result;
    }
};
