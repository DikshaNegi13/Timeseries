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
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<vector<int>>res;
        if(root==NULL){return res;}
        queue<TreeNode*>q;
        q.push(root);
        
        while(q.size())
        {
            int n=q.size();
            vector<int>p;
            for(int i=0;i<n;i++)
            {
            TreeNode* t=q.front();
            q.pop();
            p.push_back(t->val);
            if(t->left!=NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
                
            }
            res.push_back(p);
        }
        
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};