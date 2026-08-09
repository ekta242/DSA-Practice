class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> lead;
        int n=arr.size();
        int max_r=arr[n-1];
        lead.push_back(max_r);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=max_r){
                max_r=arr[i];
                lead.push_back(max_r);
            }
        }
        reverse(lead.begin(),lead.end());
        return lead;
    }
};