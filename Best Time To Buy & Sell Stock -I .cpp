class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /* Optimal Approach would not be To directly choose minimum and subtrct maximum from it  */
        /* Selecting One Element and Checking remaining All from it Would be O(N2).*/
        /* First We assume That 1st Eleemnt of Vector is MINIMUM . And a MaxProfitPossible =0
        We would now traverse The array index=1,2,3,...N . If element<MINIMUM it is assigned as minimum and Passed on(NO        subtraction as It would be Negative Result.*/
        //If Next element is greater it would be subtracted from MINIMUM and checked if it is greater than current MaxProfitPossible. In this Manner, We would get Maximum profit.
        int minprice=prices[0]; 
        int maxProfitPoss=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minprice)
                minprice=prices[i];//Then Move ahead NO Operation to be done
            else if (prices[i] - minprice > maxProfitPoss)
                maxProfitPoss = prices[i] - minprice;
                //When Element is greater
               // price[i]-minprice is checked. Maybe It would be Greater than current profit or Maybe Not We will Max value  only.
            }
        return maxProfitPoss;
    }
};


/* !!!!By Max function It gave Wrong Answer on line 15-20*/
