// Patrón: Sliding window
// Idea: expandir right siempre, contraer left con while hasta eliminar el duplicado del set.
// right - left + 1 es el tamaño de la ventana (+1 porque son índices, no distancia).
// Complejidad: O(n) tiempo, O(n) espacio

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() == 0) return 0;

        unordered_map<int,int> visited;

        int left = 0;
        int right = 0;
        int longestSubtring = INT_MIN;

        for(char c : s){

        
            while(visited[c] == 1 ){
                visited[s[left]]--;
                left++;
            }

            longestSubtring = max(longestSubtring, right - left + 1);
            visited[c]++;
            right++;

        }

        return longestSubtring;

    }
};