class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==1)
            return {{1}};
        ans  = {{1},{1,1}};
        for(int i=3;i<=numRows;i++){
            vector <int> row = {1};
            for(int j = 0;j<ans[i-2].size()-1;j++){
                row.push_back(ans[i-2][j]+ans[i-2][j+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};