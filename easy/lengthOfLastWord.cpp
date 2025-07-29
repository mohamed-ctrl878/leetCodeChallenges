class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastW = 0; 
        for(int i= s.size() - 1; i >=  0  ; i--){
            if(s[i] != ' ' && (i + 1 ==  s.size() || s[i + 1] ==' ' )){
                lastW = i + 1;
            }
            if(s[i] != ' ' && ( i - 1 == -1 ||s[i - 1] ==' ' )){
                return lastW - i;
            }
        }
        return 0;
    }
};
