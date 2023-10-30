class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

    int i=0,j=1,mp=0;

    while(j<prices.size()){
        if(prices[i]<prices[j]){
            mp+=prices[j]-prices[i];
            i++;
            j++;
        }
        else{
            i++;
            j++;
        }

    }
    return mp;


    }
};
