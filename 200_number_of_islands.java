class Solution {
    public int numIslands(char[][] grid) {
        int H=grid.length;
        if(H==0)return 0;
        
        int W=grid[0].length;
        
        if(W==0) return 0;
        
        int count=0;
        
        
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
    
     void dfs(char[][] grid, int i, int j){
          int H=grid.length;
     
        
          int W=grid[0].length;
          grid[i][j]='0';
         
         if(i+1 < H && grid[i+1][j]=='1'){
             dfs(grid,i+1,j);
         }
                 
         if(j+1 < W && grid[i][j+1] =='1'){
             dfs(grid,i,j+1);
         }
                 
                 
        if(i-1 >=0 && grid[i-1][j] =='1'){
             dfs(grid,i-1,j);
        }
            
                  
        if(j-1 >=0 && grid[i][j-1] =='1'){
             dfs(grid,i,j-1);
                 
         }
    
     }  
    
}
