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
    bool sameT(TreeNode* p, TreeNode* q){
        if(p == nullptr || q  == nullptr){
            if(p != nullptr && q== nullptr)return false;
            else if(q != nullptr && p== nullptr)return false;
            else if(q !=nullptr &&  p !=nullptr){
            if(q-> val != p->val)return false;
            }
            else return true;
        }

        bool one = sameT( p->left, q->left);
        bool two = sameT( p->right, q->right);
        if(p->val != q->val || one == false|| two == false)return false;
        else return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return sameT( p, q);
    }
};
