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
    int recur(TreeNode* root , int* height){
        if(root == nullptr)return *height;

        (*height)++;
        int left = recur(root->left ,height);
        (*height)--;

        (*height)++;
        int right = recur(root->right,height);
        (*height)--;
        if(left == 1e9 || right == 1e9)return 1e9;

        if(left +1 == right)return right;
        if(left-1 ==right)return left;
        if(left == right)return right;
        return 1e9;
    }
    bool isBalanced(TreeNode* root) {
        int height = 0; 
        int val= recur( root , &height);
        if(val == 1e9)return false;
        return true;

    }
};
