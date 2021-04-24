class Solution {
    public int maximalSquare(char[][] matrix) {
            int r=matrix.length;
        
        if(r==0)return 0;
        int c= matrix[0].length;
        
        
        if(c==0) return 0;
        
        int sol[][]=new int [r][c];
        int max_square=0;
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0|| j==0)
                {
                     if(matrix[i][j]=='1'){
                    sol[i][j]=1;
                    max_square=Math.max(max_square,sol[i][j]);
                }
                }
               else{
                    if(matrix[i][j]=='1'){
                        sol[i][j]=Math.min(Math.min(sol[i-1][j-1], sol[i-1][j]),sol[i][j-1])+1;
                        max_square=Math.max(max_square,sol[i][j]);
                    }
                }
            }
        }
        return max_square*max_square;
    }
}
