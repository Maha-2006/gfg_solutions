class Solution {
  public:
    int nonLisMaxSum(vector<int>& arr) {
        // code here
 int n = arr.size();
        vector<int> dp(n, 1);
        vector<int> sum(arr); // sum[i] = sum of LIS ending at i

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(arr[j] < arr[i]){
                    if(dp[j] + 1 > dp[i]){
                        dp[i] = dp[j] + 1;
                        sum[i] = sum[j] + arr[i];
                    } else if(dp[j] + 1 == dp[i]){
                        sum[i] = min(sum[i], sum[j] + arr[i]);
                    }
                }
            }
        }

        // Find LIS of max length and get the one with min sum
        int maxLen = 0;
        for(int i = 0; i < n; ++i)
            maxLen = max(maxLen, dp[i]);

        int minLISsum = INT_MAX;
        for(int i = 0; i < n; ++i){
            if(dp[i] == maxLen){
                minLISsum = min(minLISsum, sum[i]);
            }
        }

        int total = 0;
        for(int x : arr) total += x;

        return total - minLISsum;
    }
};