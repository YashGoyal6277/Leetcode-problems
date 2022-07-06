
class Solution {
public:
    unordered_map<TreeNode* ,int> mp;
    int rob(TreeNode* root) {
      
        
        return solve(root);
        
    }
    int solve(TreeNode *root){
        if(root==NULL) return 0;
        if(mp.find(root)!=mp.end() ){
            return mp[root];
        }
         int val=root->val;
        if(root->left){
                val+=solve(root->left->left);
                            val+=solve(root->left->right); 

        }
        if(root->right){
                val+=solve(root->right->left);
                            val+=solve(root->right->right); 

        }
        return mp[root]=max(val,solve(root->left)+solve(root->right));
        
        
        
    }
    
};