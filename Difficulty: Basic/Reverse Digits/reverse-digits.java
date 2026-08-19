class Solution {
    public int reverseDigits(int n) {
        // Code here
        int rev = 0;
        while(n>0){
            int lastdigit = n%10;
          rev = rev*10 + lastdigit;
            n= n/10;
            
        }
        return rev;
    }
}