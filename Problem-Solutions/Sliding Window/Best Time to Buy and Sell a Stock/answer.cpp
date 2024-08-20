#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min_buy = prices[0];
    int max_sell{0};

    for(int i{0}; i < prices.size(); ++i){
        min_buy = min(min_buy, prices[i]);

        int profit = prices[i] - min_buy;

        max_sell = max(max_sell, profit);
    }
    return max_sell;
    }
};