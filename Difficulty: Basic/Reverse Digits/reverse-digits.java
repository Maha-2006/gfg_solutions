class Solution {
    public int reverseDigits(int n) {
        // Code here
        int copy = 0;
        while(n>0){
         int   lastDigit = n%10;
            copy = copy*10+lastDigit;
            n=n/10;
        }
        return copy;
        
    }
}