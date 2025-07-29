class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() >0){
            digits[digits.size()-1]+=1;
        }
        for(int i = digits.size() -1; i>=0; i--){
            if(digits[i] == 10 && i == 0){
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }else if(digits[i] == 10){
                digits[i] = 0;
                digits[i-1] += 1;
            }
        }

        return digits;
    }
};
