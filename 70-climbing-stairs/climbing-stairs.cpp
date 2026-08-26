class Solution {
public:
    int climbStairs(int n) {

        if( n <= 2){
            return n;
        }

        int prev1 = 1;
        int prev2 = 2; 
        int numberSteps = 0;

        for( int i = 3 ; i <= n ; ++i){

            numberSteps = prev1 + prev2;
            prev2 = numberSteps;
            prev1 = numberSteps - prev1; 

        }
        
        return numberSteps;
        
    }
};