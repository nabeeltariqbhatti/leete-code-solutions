class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        H = len(grid)
        W=len(grid[0])
        
        if(H==0 or W==0):
            return 0
        count =0
        
        
        for y in range(0,H):
            for x in range(0,W):
                if(grid[y][x]=='1'):
                    count+=1
                    self.dfs(grid, y,x)
                
        return count
        
    def dfs(self, grid: List[List[str]], y,x):
        H = len(grid)
        W=len(grid[0])
        
        grid[y][x]=0
        
        if(y+1<H and grid[y+1][x]=='1'):
            self.dfs(grid,y+1,x)
            
        if(y-1>=0 and grid[y-1][x]=='1'):
            self.dfs(grid,y-1,x)
            
        if(x+1<W and grid[y][x+1]=='1'):
            self.dfs(grid,y,x+1)
            
        if(x-1>=0 and grid[y][x-1]=='1'):
            self.dfs(grid,y,x-1)
