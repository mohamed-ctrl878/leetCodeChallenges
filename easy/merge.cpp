class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int le = 0 , ri = 0,val = 0;


        while(ri < n){
            if(nums1[le] == 0 && le >= m){
                nums1[le] = nums2[ri];
                ri++;
            }
           else if(nums1[le] > nums2[ri]){
                val = nums1[le];
                nums1[le] = nums2[ri];
                nums2[ri] = val;
                for(int i = 0; i < n - 1; i++){
                    if(nums2[i] > nums2[i + 1]){
                        val = nums2[i];
                        nums2[i] = nums2[i + 1];
                        nums2[i + 1] = val;
                    }
                }
            }
        //             printf("- %d -", nums1[le]);
        // printf("- %d -", nums2[ri]);
            le++;
        }
    }
};
