class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
       long  int reverse=0;
        int y =x;
        int last=0;
        while(y>0){
           last = y%10;
           reverse = reverse*10 +last;
           y=y/10;

        }
        if(reverse == x){
            return true;
        }
            else{
                return false;
            }
        }
    
};