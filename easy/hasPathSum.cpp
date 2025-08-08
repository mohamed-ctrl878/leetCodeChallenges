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
    bool recu(TreeNode* root, int targetSum){
        if(root == nullptr){
            return false;
        }
        if(root->left == nullptr && root->right == nullptr ){
            if(targetSum - root->val == 0)return true;
            return false;
        }
        if(recu(root->left,targetSum - root->val)||recu(root->right,targetSum - root->val))return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(recu(root, targetSum))return true;
        return false;
    }
};
