class Solution {
public:

    string addBinary(string a, string b) {
        string bgr = a.size() >=b.size()? a : b ;
        string smlr = a.size() < b.size()?a:b;
        string result;
        int bigSize = bgr.size()-1;
        int i = smlr.size() -1;
        int j = 0;
        while(bigSize >=0){
            int binary = 0;
            if(bgr[bigSize] =='1')binary+=1;
            if(i >=0 && smlr[i] == '1')binary+=1;
            if(result.size()!=0 && bgr.size()-1 - bigSize == result.size()-1){
                if(binary == 2){
                    result+='1';
                }else if(binary == 1){
                    printf("%d", j);
                    if(result[j] == '1'){
                        result[j] = '0';
                        result+='1';
                    }else{
                        result[j] = '1';
                    }
                }
            }else{
                if(binary == 2){
                    result+='0';
                    result+='1';
                }else if(binary == 1){
                        result[j] = '0';
                        result+='1';
                }else{
                        result+='0';
                }
            }
                j++;
                i--;
                bigSize--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
