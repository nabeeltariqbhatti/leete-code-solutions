class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> _jewels;
        
       for(char c:jewels){
           _jewels.insert(c);
       }
        int count=0;
        
        for(char stone: stones){
            if(_jewels.find(stone) != _jewels.end()){
                ++count;
            }
        }
        return count;
    }
};
