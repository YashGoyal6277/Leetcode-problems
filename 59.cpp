class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          int top=0,down=n-1,left=0,right=n-1;
        int c=1;
        vector<vector<int>> matrix(n,vector<int>(n));
        int dir=0;
        while(top<=down and left<=right){
            if(dir==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=c++;
                }
              top++;
                
            }
            else if(dir==1){
            for(int i=top;i<=down;i++){
                matrix[i][right]=c++;
            }
            right--;
                
            }
            
           else if(dir==2){
                for(int i=right;i>=left;i--){
                    matrix[down][i]=c++;
                }
                down--;
               
           } 
            
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    matrix[i][left]=c++;
                }
                left++;
            }
            dir++;
            dir=dir%4;
            
        }
       return matrix;
    }
};