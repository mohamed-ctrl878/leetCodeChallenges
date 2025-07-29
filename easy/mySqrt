class Solution {
public:
    int mySqrt(int x) {
        if(x <2)return x;
        double result = 0 ; 
        double i = x/2;
        while(true){
            i=((x/i)+i)/2;
            if(abs(i - result) < pow(10,-6))return i;
            result = i;
        }
        return i;
    }
};
