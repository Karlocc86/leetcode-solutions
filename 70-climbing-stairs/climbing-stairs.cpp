class Solution {
public:

    unordered_map<int, int> dp;
    int climbStairs(int n) {


        if( n <= 2){
            return n;
        }
        else if(dp.find(n) != dp.end()){
            return dp[n];
        }
        else{
            dp[n] = climbStairs(n-1) + climbStairs(n-2);
        }

        return dp[n];
   
    }
};