class Solution {
public:
    bool isPalindrome(int x) {
        long long digit=0;
        long long n=x;
        if (x<0) return false;
        while(x!=0){
            digit=digit*10+x%10;
            x/=10;
        }
        if(digit==n){
            return true;
        }
        return false ;
    }
};