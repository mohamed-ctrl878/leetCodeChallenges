class Solution {
public:
bool isPalindrome(int x) {
    if (x < 0) {
        return false; 
    }
    
   long long int val = x; 
   long long int pali = 0; 
   long long int f10 = 1; 
   long long int i = 1;  
    for (; x / i > 0; i *= 10) {}
    i /= 10;
    
    while (val > 0) {
        pali += f10 * (val / i); 
        val %= i;  
        i /= 10;  
        f10 *= 10;  
    }
    
    if (pali == x) return true;
    return false;
}
};
