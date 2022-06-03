/*Foremost Diffrenece in Part I and Part II is There is No need of Minprice variable. */
/* This is Becaue We Can do Any Number Of transaction in This Question(Not 1)  */
//So We Look Out For Peak & Valley In Our Time Graph (Numbers)
// We Take Profit Variable To Store Profit and Successively add profit as it occur.
// Condition to Gain Profit is Next Day price should be greater Than Previous day price.
//So We Check Only this and Keep On Adding Profit.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfitPoss=0;
      for(int i=1;i<prices.size();i++)
      {
          if(prices[i]>prices[i-1])
              maxProfitPoss += prices[i]-prices[i-1];
      }
        return maxProfitPoss;
    }
};
