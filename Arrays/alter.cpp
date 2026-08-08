class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> alt;
        for(int i=0;i<=arr.size()-1;i+=2){
            alt.push_back(arr[i]);
            }
        return alt;
    }
};
