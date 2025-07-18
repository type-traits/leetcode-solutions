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
    bool isLeaf(TreeNode* root)
    {
        return (root->left == nullptr && root->right == nullptr) ;
    }

    int sumHelper(TreeNode* root, int cur)
    {
        if(root == nullptr)
            return 0;

        cur = cur*10 + root->val;
        
        if(isLeaf(root))
            return cur;

        return sumHelper(root->left, cur) + sumHelper(root->right, cur);

    }

    int sumNumbers(TreeNode* root) {
        return  sumHelper(root, 0);
    }
};