/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void findsum(vector<vector<int>>&res,vector<int>&v,int target,TreeNode* root)
    {
                if(!root){
            return;}
            v.push_back(root->val);

        if(!(root->right)&&!(root->left)&&target==root->val){res.push_back(v);
                }

        findsum(res,v,target-root->val,root->left);
        findsum(res,v,target-root->val,root->right);
        v.pop_back();
        return;
        
    }
    
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     vector<vector<int>>res;
        vector<int>p;
        findsum(res,p,targetSum,root);
// sort( res.begin(), res.end() );
// res.erase( unique( res.begin(), res.end() ),res.end() );
    
        return res; 
    }
};