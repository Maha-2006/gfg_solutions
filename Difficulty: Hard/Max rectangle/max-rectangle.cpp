class Solution {
  public:
   int largestRectangleArea(vector<int> &heights) {
        stack<int> st;
        heights.push_back(0);
        int maxArea = 0;
        for (int i = 0; i < (int)heights.size(); i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        heights.pop_back();
        return maxArea;
    }

    // Main: Maximum rectangle of 1s in binary matrix
    int maxArea(vector<vector<int>>& mat) {
        if (mat.empty()) return 0;
        int rows = mat.size(), cols = mat[0].size();
        vector<int> height(cols, 0);
        int maxAreaAns = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0)
                    height[j] = 0;
                else
                    height[j] += 1;
            }
            // ✅ exact same function name used
            maxAreaAns = max(maxAreaAns, largestRectangleArea(height));
        }
        return maxAreaAns;
    }
};