class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n<2) return -1;
        int maxi = INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            int ans = arr[i]+arr[i+1];
            maxi = max(maxi,ans);
        }
        return maxi;
    }
};