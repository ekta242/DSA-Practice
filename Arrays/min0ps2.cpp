class Solution {
  public:
    int minOps(vector<int>& arr, int k){
        int max=*max_element(arr.begin(),arr.end());
        int ops=0;
        bool value=true;
        for(int a: arr){
            if((max-a)%k!=0){
                value=false;
                break;
            }
            ops+=(max-a)/k;
            }
        return value?ops:-1;
    }                      
    
};