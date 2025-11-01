class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX,maxprice=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxprice=max(maxprice,prices[i]-minprice);
        }
       return maxprice; 
    }
};