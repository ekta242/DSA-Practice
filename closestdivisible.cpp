class Solution {
  public:
    int closestNumber(int n, int m) {
        int t=n;
        int k=n;
        while(true){
            bool tok=(t%m==0);
            bool kok=(k%m==0);
            if(tok && kok) return abs(t)>abs(k)?t:k;
            if(tok) return t;   
            if(kok) return k;
            t++;            
            k--;
            }
        }
    };