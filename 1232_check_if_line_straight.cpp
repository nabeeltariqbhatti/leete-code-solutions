class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       float slope=getSlope(coordinates[0],coordinates[1]);
        for(int i=2; i<coordinates.size();i++){
            float m=getSlope(coordinates[i],coordinates[0]);
            if(m!=slope){
                return false;
            }
        }
        return true;
      
    }
      float getSlope(vector<int>&p1,vector<int>&p2){
            if(p1[0]==p2[0])
                return 100000;
            
            return (float) (p2[1]-p1[1])/(p2[0]-p1[0]);
            
        }
};
