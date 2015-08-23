/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        TreeNode* f = p->val < q->val ? p:q ;
        TreeNode* l = p->val > q->val ? p:q ;
        if(root->val >= f->val && root->val <= l->val) return root;
        else if(root->val > l->val && root->left != NULL) lowestCommonAncestor( root->left, f,l);
        else if(root->val < f->val && root->right != NULL) lowestCommonAncestor(root->right, f,l);
    }
};