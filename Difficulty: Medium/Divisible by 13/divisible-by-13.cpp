class Solution {
  public:
    bool divby13(string &s) {
        // code here
       int curr = 0;
        int k = 13;

        for (char ch : s) {
            curr = (curr * 10 + (ch - '0')) % k;
        }

        return curr == 0;
    }
};