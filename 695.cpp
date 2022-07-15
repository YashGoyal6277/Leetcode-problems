class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size()==0)   return 0;
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               if(vis[i][j]==false and grid[i][j]==1){
                  ans=max(solve(grid,i,j,vis),ans) ;
               }
           }
       } 
        return ans;
    }
    int solve(vector<vector<int>>& grid,int r,int c,vector<vector<bool>> &vis){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]==0 || vis[r][c]==true) return 0  ;
        vis[r][c]=true;
       return 1+solve(grid,r,c-1,vis)+solve(grid,r+1,c,vis)+solve(grid,r-1,c,vis)+solve(grid,r,c+1,vis);
        
        
    }
};