class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int original = Math.abs(n);
        int copy = original;
        int reverse = 0;
        while(copy>0){
            int lastDigit = copy%10;
            reverse = reverse*10+lastDigit;
            copy = copy/10;
        }
        return reverse == original;
    }
}