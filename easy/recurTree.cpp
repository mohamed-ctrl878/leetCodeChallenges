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
    void recurTree(vector<int>* ab, TreeNode* root){
        if(root == nullptr){
            return;
        }
        recurTree( ab, root->left);
        (*ab).push_back(root->val);
        recurTree(ab, root->right);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        recurTree(&res, root);
        return res;
    }
};
