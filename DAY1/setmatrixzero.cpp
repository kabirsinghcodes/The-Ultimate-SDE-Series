class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=1; // for checking 1st row
        
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0) t=0; 
            for(int j=1;j<n;j++)
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0; //here we check if any of from 1ton-1,m-1 is 0 putting in row1=0 and col1=0
        }
        //tracking from (m-1)(n-1) if any of the row=0 OR col=0 we mark it 0
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=1;j--)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
                
                if(t==0) matrix[i][0]=0; //now also putting first row to 0  
        }
        return;
        
    }
};