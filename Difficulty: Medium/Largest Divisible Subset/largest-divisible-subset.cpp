class Solution {
  public:
    vector<int> largestSubset(vector<int>& arr) {
        // Code here
            sort(arr.begin(), arr.end());

        int n = arr.size();
        vector<vector<int>> dp(n);
        vector<int> result;

        for (int i = 0; i < n; ++i) {
            dp[i].push_back(arr[i]);

            for (int j = 0; j < i; ++j) {
                if (arr[i] % arr[j] == 0) {
                    vector<int> candidate = dp[j];
                    candidate.push_back(arr[i]);

                    if (candidate.size() > dp[i].size() ||
                        (candidate.size() == dp[i].size() && candidate > dp[i])) {
                        dp[i] = candidate;
                    }
                }
            }

            if (dp[i].size() > result.size() ||
                (dp[i].size() == result.size() && dp[i] > result)) {
                result = dp[i];
            }
        }

        return result;
    
    }
};