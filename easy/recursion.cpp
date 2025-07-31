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
    bool recursion(TreeNode* le, TreeNode* ri){
        if(le == nullptr && ri == nullptr){
            return true;
        }else if(le == nullptr ||ri == nullptr ||le->val !=ri->val)return false;
        if(!recursion(le->left, ri->right)||!recursion(le->right, ri->left)){
            return false;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        return recursion(root->left,root->right);
    }
};
