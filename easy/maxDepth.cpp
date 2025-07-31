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


    void recTree(int* maxNum, int current, TreeNode* root){
        if(root == nullptr){
            if(current > *maxNum){
                *maxNum = current;
            }
            return ;
        }

            current++;
            recTree(maxNum, current,root->left);
            current--;
            current++;
            recTree(maxNum, current,root->right);
            current--;

    }
    int maxDepth(TreeNode* root) {
        int current = 0;
        int maxNum = 0;
        recTree(&maxNum, current, root);
        return maxNum ;
    }
};
