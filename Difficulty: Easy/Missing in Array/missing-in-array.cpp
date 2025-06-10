class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long total = n*(n+1)/2;
        int sum = 0;
        for(int su:arr)
        {
            sum+=su;
        }
        return (int)total - sum;
    }
};