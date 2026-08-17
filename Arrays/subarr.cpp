class Solution {
  public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        vector<vector<int>> result;
        solve(arr,0,0,result);
        return result;
    }
        private:
            void solve(vector<int> &arr,int start,int end,vector<vector<int>>&result){
                int n=arr.size();
                if(start==n){
                    return;
                }
                if(end==n){
                    solve(arr,start+1,start+1,result);
                    return;
                }
              
                vector<int> sub;
                    for(int i=start;i<=end;i++){
                        sub.push_back(arr[i]);
                    }
                    result.push_back(sub);
                    solve(arr,start,end+1,result);
                
            }
};