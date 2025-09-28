class Solution {
public:
    vector<int> longestSubarray(vector<int>& nums, int x) {
        int start = 0, maxLen = 0, maxStart = 0;

        for(int end = 0; end < nums.size(); end++) {
            // Compute min and max of current window [start..end]
            int currMin = nums[start], currMax = nums[start];
            for(int i = start; i <= end; i++) {
                currMin = min(currMin, nums[i]);
                currMax = max(currMax, nums[i]);
            }

            // Shrink window from left until valid
            while(currMax - currMin > x) {
                start++;
                currMin = nums[start];
                currMax = nums[start];
                for(int i = start; i <= end; i++) {
                    currMin = min(currMin, nums[i]);
                    currMax = max(currMax, nums[i]);
                }
            }

            // Update longest subarray
            if(end - start + 1 > maxLen) {
                maxLen = end - start + 1;
                maxStart = start;
            }
        }

        return vector<int>(nums.begin() + maxStart, nums.begin() + maxStart + maxLen);
    }
};
