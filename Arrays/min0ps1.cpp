vclass Solution {
  public:
    int minOps(vector<int>& arr, int k){
              int ans=INT_MAX;
              for(int target: arr){
                  int ops=0;
                  bool value=true;
                  for (int a: arr)
                  {
                      if(a>target||(target-a)%k!=0)
                      {
                          value=false;
                          break;
                      }
                      ops+=(target-a)/k;
                  }
                  if(value)
                  {
                      ans=min(ans,ops);
                  }
              }
              return ans==INT_MAX?-1:ans;
          }

};