class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int ROW = matrix.size();
        int COL = matrix[0].size();
        int c1=0,r1=0;// Representing No zero
        
        for(int i=0;i<ROW;i++)
        {
          if(matrix[i][0]==0)
              r1=1;
        }
         for(int j=0;j<COL;j++)
        {
          if(matrix[0][j]==0)
              c1=1;
        }
        for(int i=1;i<ROW;i++)
        {
            for(int j=1;j<COL;j++)
            {
                if(matrix[i][j]==0)
                {matrix[0][j]=0;  // First Row ke jth column mai
                matrix[i][0]=0;  // First Column ke ith Row mai
             }  
      }            
                
        }
        /*    Now, We know Where Zero is Present We Now Fill Rows and Columns with zero*/
        // Not At Once but Individually
        for(int i=1;i<ROW;i++)
        {        
                if(matrix[i][0]==0)
                    for(int j=1;j<COL;j++){matrix[i][j]=0;}
                    
        }
        for(int j=1;j<COL;j++)
        {
           if(matrix[0][j]==0)
           {
               for(int i=1;i<ROW;i++)
               {
                   matrix[i][j]=0;
               }
           }
        }
    }
};
