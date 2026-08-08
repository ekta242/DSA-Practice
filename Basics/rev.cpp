class Solution {
  public:
    int reverseDigits(int n) {
        int rev=0,r;
        while(n>0){
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        return rev;
    }
};