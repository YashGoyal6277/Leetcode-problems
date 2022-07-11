
class Solution {
public:
    map<int,int> mp;
    vector<int> rightSideView(TreeNode* root) {
     vector<int> ans;
        if(root==NULL) return ans;
        solve(root,0);
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
    void solve(TreeNode* root,int level){
        if(root==NULL) return;
        mp[level]=root->val;
        solve(root->left,level+1);
        solve(root->right,level+1);
        
    }
};
