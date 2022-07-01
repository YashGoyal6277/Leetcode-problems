class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int>  ans;
        while(down>=top and left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                }
            top++;
            
            for(int i=top;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            if(down>=top){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if(right>=left){
                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        return ans;
    }
};class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int>  ans;
        while(down>=top and left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                }
            top++;
            
            for(int i=top;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            if(down>=top){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if(right>=left){
                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        return ans;
    }
};class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int>  ans;
        while(down>=top and left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                }
            top++;
            
            for(int i=top;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            if(down>=top){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if(right>=left){
                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        return ans;
    }
};