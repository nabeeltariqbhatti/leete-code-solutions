class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid)
        if(m==0):
            return 0;
        n=len(grid[0])
        if(n==0):
            return 0;
      
        for i in range(0,m):
            for j in range(0,n):
                if(i-1>=0 and j-1>=0):
                    grid[i][j]+=min(grid[i-1][j], grid[i][j-1])
                else:
                    if(i-1>=0):
                        grid[i][j]+=grid[i-1][j]
                    
                    if(j-1>=0):
                        grid[i][j]+=grid[i][j-1]
        return grid[m-1][n-1];
