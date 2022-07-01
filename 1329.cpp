class Solution {
public:
    void sortDiag(vector<vector<int>>& mat,int r,int c,int m,int n){
        int i=r,j=c;
         vector<int> v;
         while(i<m and j<n){
              v.push_back(mat[i][j]);
             i++;
             j++;
         }
        sort(v.begin(),v.end());
          i=r;
          j=c;
          for(int k=0;k<v.size();k++){
              mat[i][j]=v[k];
              i++;
              j++;
          }
        
        
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();   
        for(int i=0;i<m;i++){
            sortDiag(mat,i,0,m,n);
        }
        for(int i=0;i<n;i++){
            sortDiag(mat,0,i,m,n);
        }
        return mat;
    }
};