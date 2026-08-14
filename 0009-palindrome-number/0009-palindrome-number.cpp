class Solution {
public:
    bool isPalindrome(int n) {
        if (n<0) return false;
        int rev = 0;
       int dup = n;
        while(n!=0){
            int lastdigit = n%10;
          
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0; 
            }
            rev = rev * 10 + lastdigit;
            n = n/10;
        };
        
      return  rev == dup;
    
    }
};