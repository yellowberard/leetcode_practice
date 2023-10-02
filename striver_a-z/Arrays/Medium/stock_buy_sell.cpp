// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// https://takeuforward.org/data-structure/stock-buy-and-sell/

// optimal approach
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;
        int min = INT_MAX;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if((prices[j]-prices[i])>max){
        //             max=prices[j]-prices[i];
        //         }
        //     }
        // }
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            if ((prices[i] - min) > max)
            {
                max = prices[i] - min;
            }
        }
        return max;
    }
};