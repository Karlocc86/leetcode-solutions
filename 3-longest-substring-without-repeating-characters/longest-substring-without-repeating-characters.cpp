// Patrón: Sliding window
// Idea: expandir right siempre, contraer left con while hasta eliminar el duplicado del set.
// right - left + 1 es el tamaño de la ventana (+1 porque son índices, no distancia).
// Complejidad: O(n) tiempo, O(n) espacio

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int res = 0;

        std::unordered_set<char> seen;


        for( int right = 0 ; right < s.size() ; ++right){

            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);
            res = max(res , right - left + 1);
        }

        return res;
    }
};