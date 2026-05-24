class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int total=0;
        for (int i=0; i<size-1; i++){
            int diff = prices[i+1] - prices[i];
            if (diff > 0)   total += diff;
        }
        return total;
    }
};
/*
한번에 하나의 주식만 가질 수 있다.
- 다음 원소가 더 큰지 작은지 확인,
- [7 1 5 3 6 4] -> diff 는 [-6 4 -2 3 -2] -> max profit = 7
- [1 2 3 4 5] -> diff 는 [1 1 1 1]
*/
