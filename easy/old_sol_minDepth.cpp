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
    int rec(TreeNode* root , int depth){
        if(root == nullptr)return depth;
        int one  = root->left != nullptr ? rec(root->left,depth+1):depth+1;
        int two  = root->right != nullptr ?rec(root->right, depth+1):depth+1;
        if(one == depth+1)return two;
        if(two == depth+1)return one;
        if(one > two)return two;
        return one;
    }
    int minDepth(TreeNode* root) {
        return rec(root , 0);
    }
};
