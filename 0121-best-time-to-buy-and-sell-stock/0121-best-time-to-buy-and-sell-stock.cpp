class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxprofit=0,minbuy=INT_MAX ;
      for(int i=0;i<prices.size();i++){
        maxprofit =max(maxprofit,prices[i]-minbuy);
        if(prices[i]<minbuy){
            minbuy =prices[i];
        }

      }
      return maxprofit;
    }
};