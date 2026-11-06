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
    int best=0;
    public:
    int height(TreeNode* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        int l=height(node->left);
        int r=height(node->right);
        best=max(best,l+r);
        int x=max(l+1,r+1);
        return x;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        height(root);
        return best;
    }
};