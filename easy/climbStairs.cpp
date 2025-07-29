class Solution {
public:
    int resursion(int root,unordered_map<int, int>* umap){
        if(root == 0 ){return 1;}else if(root == -1)return 0;
        if((*umap)[root]){
            return (*umap)[root];
        }
        int one= resursion(root-1,umap);
        int two= resursion(root-2,umap);
        (*umap)[root] = one+two;
        return one+two ;
    }
    int climbStairs(int n) {
        if(n == 1)return 1;
        unordered_map<int, int> umap;
        int idx = 0;
        return resursion(n,&umap);
    }
};
