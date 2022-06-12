class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   
        int m = matrix.size();
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
    }

    
};

/*class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
   
        int col0=1, rows=matrix.size(), cols=matrix[0].size();
   
        for(int i=0;i<rows;i++){
            if(matrix[i][0] == 0){
                col0=0;
            }
            for(int j=1;j<cols;j++){
                
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]==0;
                }
                
            }
            
        }
        
    
    
    for(int i=rows-1; i>=0 ;i--){
        for(int j=cols-1;j>=1;j--)
            if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j]=0;                                                                                                                         
       if(col0=0)matrix[i][0]=0;

    
    }
    }
};*/