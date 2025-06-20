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
    TreeNode* addOneRow(TreeNode* root, int val, int depth, bool isLeft=1) {
        if (!root) return root;
        switch(depth){
            case 1:
                if (isLeft) return new TreeNode(val, root, NULL);
                else return new TreeNode(val, NULL, root);
            break;
            case 2:
                root->left=new TreeNode(val, root->left, NULL);
                root->right=new TreeNode(val, NULL, root->right);
            break;
            default:
                root->left=addOneRow(root->left, val, depth-1);
                root->right=addOneRow(root->right, val, depth-1, 0);
        }
        return root;
    }
};