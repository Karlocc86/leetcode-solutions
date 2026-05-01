class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int min = INT_MAX;

        for(int x : prices){

            if(min > x){

                min = x;

            }
            else{

                maxProfit+= x - min;
                min = x;

            }

        }


        return maxProfit;
        
    }
};