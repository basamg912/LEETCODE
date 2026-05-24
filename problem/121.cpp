class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MIN_PRICE = INT_MAX;
        int MAX_PROFIT = 0;

        for (int price : prices){
            MIN_PRICE = min(MIN_PRICE, price);
            MAX_PROFIT = max(MAX_PROFIT, price - MIN_PRICE);
        }
        return MAX_PROFIT;
    }
};
/*
stock prices 가 들어있는 vector, profit 을 최대화할 수 있을때, 그 가치 return
*/
