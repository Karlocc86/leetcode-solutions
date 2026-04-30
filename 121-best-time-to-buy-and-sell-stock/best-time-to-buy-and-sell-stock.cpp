class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int profit=0;


        for(int x : prices){

            if(minPrice > x){
                minPrice = x;
            }
            else{

                profit = max( profit, x - minPrice);

            }


        }

        return profit;
    }
};