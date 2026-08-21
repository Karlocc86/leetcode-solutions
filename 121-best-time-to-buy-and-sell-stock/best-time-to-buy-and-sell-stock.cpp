class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int minPrice = INT_MAX;

        for( int x : prices){

            if(x < minPrice){
                minPrice = x;
            }
            else{

                maxProfit = max(maxProfit , x - minPrice );

            }
        }

    return maxProfit;

    }
};