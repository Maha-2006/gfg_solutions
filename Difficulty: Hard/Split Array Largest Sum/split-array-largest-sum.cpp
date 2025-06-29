class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
      long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);

        while (low <= high) {
            long long mid = (low + high) / 2;
            if (isPossible(arr, k, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    bool isPossible(vector<int>& arr, int k, long long mid) {
        int count = 1;
        long long sum = 0;
        for (int num : arr) {
            if (sum + num <= mid) {
                sum += num;
            } else {
                count++;
                sum = num;
                if (count > k) return false;
            }
        }
        return true;
    }
    
};            
  