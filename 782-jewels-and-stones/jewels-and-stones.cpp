class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount = 0;

        for(char stone : stones){

            for(char jewel : jewels){

                if(jewel == stone) jewelCount++;
            }
        }

        return jewelCount;
    }
};