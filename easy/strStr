class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        for(; i < haystack.size(); i++){
            if(haystack[i] == needle[0] ){
                for(int k = 0; k < needle.size(); k++){
                    if(haystack[i + k] == needle[k] ){
                        if(k == needle.size() - 1){
                            return i;
                        }
                    }else break;
                }

            }
        }
        return -1;
        
    }
};
