class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int r=matrix.size();
        
        if(r==0)return 0;
        int c= matrix[0].size();
        
        
        if(c==0) return 0;
        
        vector<vector<int>> sol(r,vector<int>(c,0));
        int max_square=0;
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0|| j==0)
                {
                     if(matrix[i][j]=='1'){
                    sol[i][j]=1;
                    max_square=max(max_square,sol[i][j]);
                }
                }
               else{
                    if(matrix[i][j]=='1'){
                        sol[i][j]=1+min({sol[i-1][j-1], sol[i-1][j],sol[i][j-1]});
                        max_square=max(max_square,sol[i][j]);
                    }
                }
            }
        }
        return max_square*max_square;
    }
};
