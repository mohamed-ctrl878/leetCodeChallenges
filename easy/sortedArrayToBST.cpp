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
    TreeNode* root = nullptr;
    TreeNode* create(int num){
        TreeNode* node = new TreeNode(num);
        return node;
    }
    TreeNode* rec(TreeNode* root, int num){
        if(root == nullptr){
            return create(num) ;
        }
        if(root->val >= num){
            root->left = rec(root->left,num);
        }else{
            root->right = rec(root->right,num);
        }
        return root;
    }
    void quickSort(vector<int>& nums, int left, int right){
        if(left >right)return;
        int mid = left + (right - left)/2;
        if(mid <nums.size())
        root = rec(root,nums[mid]);
        quickSort(nums, left, mid-1);
        quickSort(nums, mid+1, right);
        return;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        quickSort(nums,0, nums.size());
        return root;
    }
};
