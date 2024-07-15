class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        int k=1;
        int small=prices[0],large=0;
        for(int i=1; i<l; i++){
            if(prices[i]<small){
                small=prices[i];
            }
            else if(prices[i]-small>large){
                large=prices[i]-small;
            }
            
        }
        return large;
    }
};
