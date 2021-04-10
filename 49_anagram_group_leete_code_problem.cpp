class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //vector inside a vector
        
        vector<vector <string>> result;
        
 
        if(strs.size()==0){
            result;
        }
        
        //unordered map with string as key to push strings with same alphabets
        unordered_map<string, vector<string>>map;
    
        
        for(string str: strs){
           string key=str;
           std::sort(key.begin(),key.end());
           map[key].push_back(str);
           
        }
        
        for(auto pair: map){
           
            result.push_back(pair.second);
        }
        return result;
        
    }
};
