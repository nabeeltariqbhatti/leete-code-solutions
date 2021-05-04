class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)return image;
        
         flood_fill(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
    
    void flood_fill(vector<vector<int>>& image, int sr, int sc, int newColor,int oldColor){
        if(sr<0||sc<0 || sr>=image.size()||sc>=image[0].size()|| oldColor!=image[sr][sc]){
            return;
        }
        image[sr][sc]=newColor;
        flood_fill(image,sr+1,sc,newColor,oldColor);
       flood_fill(image,sr-1,sc,newColor,oldColor);
         flood_fill(image,sr,sc+1,newColor,oldColor);
         flood_fill(image,sr,sc-1,newColor,oldColor);
    }
};
