class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> sol;
        unordered_map<string, vector<string>> grpAnm;
        for(string& s : strs){
            vector<int> cont(26,0);
            for(char& c : s){
                cont[c - 'a']++;
            }
            string key = {};
            for(int i = 0 ; i < 26 ; i++){
                key += to_string(cont[i]);
                key += '#';
            }

            grpAnm[key].push_back(s);
        }

        for(auto& pair : grpAnm){
            sol.push_back(pair.second);
        }

        return sol;
    }
};