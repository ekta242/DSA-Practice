class Solution {
  public:
    int closestNumber(int n, int m) {
        int t=n;
        int k=n;
        bool found=false;
        while(!found){
            if(t%m==0||k%m==0){
                found=1;
                break;
            }else{
                t++,k--;
                found=0;
            }
        }
        if (abs(t)>abs(k))
            cout << t << endl;
        else
            cout << k << endl;
        return 0;
    }
};