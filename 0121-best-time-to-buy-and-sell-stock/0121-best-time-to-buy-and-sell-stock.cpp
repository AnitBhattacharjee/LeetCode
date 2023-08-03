class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int least= INT_MAX;
        int profit=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<least)
            {
                least=prices[i];
            }
            temp=prices[i]-least;
            if(temp>profit)
            {
                profit=temp;
            }
        }
         return profit;
    }
   
};