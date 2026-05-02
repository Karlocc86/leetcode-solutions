// Patrón: Greedy
// Idea: sumar cada subida diaria es equivalente a encontrar la transacción óptima, mi ejemplo
// donde me trabe [1,2,3,4,5], es lo mismo comprar vender diario a comprar 1 y vender en 5.
// Si prices[i] > prices[i-1], esa diferencia forma parte de la ganancia máxima.
// Complejidad: O(n) tiempo, O(1) espacio

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