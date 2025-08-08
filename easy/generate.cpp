class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> nums(numRows); 
        for(int i = 0 ; i < nums.size(); i++){
            nums[i].resize(i+1); // تحديد حجم الصف الحالي
            for(int j = 0 ; j <= i ; j++){
                if(j == 0 || j == i){
                    nums[i][j] = 1;
                }else if ( i > 1){
                    nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
                }
            }
        }
        return  nums;
    }
};
