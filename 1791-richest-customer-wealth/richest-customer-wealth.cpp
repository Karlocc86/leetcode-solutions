class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = INT_MIN;

        for(auto& costumers : accounts){

            int currenMaxWealth = accumulate(costumers.begin() , costumers.end(), 0);
            maxWealth = max(maxWealth , currenMaxWealth);
        }


    return maxWealth;

    }
};