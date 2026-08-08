class Solution {
  public:
    int sumOfDigits(int n) {
        int temp=n,sum=0;
        while(temp>0){
            sum+=temp%10;
            temp=temp/10;
        }
        return sum;
    }
};