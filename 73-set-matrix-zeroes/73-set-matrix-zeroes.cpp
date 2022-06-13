class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   
        int m=matrix.size();
        int n=matrix[0].size();
        
        int i,j;
        
        bool first_row=false, first_col=false;
        
        for(int i=0;i<m;i++){
            
            if(matrix[i][0]==0){
                first_col=true;
            }
            
        }
        
           for(int j=0;j<n;j++){
            
            if(matrix[0][j]==0){
                first_row=true;
            }
            
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        
        if(first_col){
             for(int i=0;i<m;i++){
                 matrix[i][0]=0;
             }
        }
            
               if(first_row){
             for(int j=0;j<n;j++){
                 matrix[0][j]=0;
             }
               }
        }
    
    
};

     /*int m = matrix.size();
        int n = matrix[0].size();
        int i, j;
        bool first_row = false;
        bool first_col = false;
        
        for(i = 0; i < m; i++)
        {
            if(matrix[i][0] == 0)
            {
                first_col = true;
            }
        }
        for(j = 0; j < n; j++)
        {
            if(matrix[0][j] == 0)
            {
                first_row = true;
            }
        }
        for(i = 1; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(i = 1; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if(first_row)
        {
            for(j = 0; j < n; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if(first_col)
        {
            for(i = 0; i < m; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }*/