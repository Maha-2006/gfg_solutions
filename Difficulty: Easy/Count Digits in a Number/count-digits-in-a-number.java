class Solution {
    public static int countDigits(int n) {
        // Code here
        int count = 0;
        while(n > 0) {
            int rev  = n%10;
            count++;
            n = n/10;
        }
        
    return count;
    }
}
