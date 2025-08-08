class Solution {
public:

    string convert(string s, int numRows) {
        vector<vector<char>> res(numRows);
        string result;
        bool up = false;
        int row = 0;
        int col = 0;
        for (int i = 0; i < s.size(); i++) {
            if (row == 0) {
                up = false;
            } else if (row == numRows-1) {
                up = true;
            }
            for (int i  = res[row].size()-1;i < col;i++){
                res[row].push_back(' ');
            }
            res[row][col] = s[i];
            if(numRows ==1){
                col++;
            }else
             if (up) {
                row--;
                col++;
            } else {
                row++;
            }
        }
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < res[i].size(); j++) {
                if (res[i][j] != ' ') {
                    result += res[i][j];
                }
            }
        }
        return result;
    }
};
