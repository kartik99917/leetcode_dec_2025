class Solution {
    public:
        int maxProfit(vector<int>& prices) {    //Takes a vector prices, where prices[i] is the stock price on day i. 
                                                // Returns the maximum profit possible from one buy and one sell.
            int l = 0;  // l - buy day
            int r = 1;  // r - sell day
            int maxProfit = 0;  // maxProfit - maximum profit possible from one buy and one sell
    
            while (r < prices.size()) {  // while the sell day is less than the size of the prices vector
                if (prices[l] < prices[r]) {  // if the buy day is less than the sell day
                    int profit = prices[r] - prices[l];  // calculate the profit
                    maxProfit = max(maxProfit, profit);  // update the maximum profit
                } else {  // if the buy day is greater than the sell day
                    l = r;  // update the buy day to the sell day
                }
                r++;  // increment the sell day
            }
            return maxProfit;  // return the maximum profit
        }
    };