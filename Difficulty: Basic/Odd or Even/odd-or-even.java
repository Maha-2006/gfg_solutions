class Solution {
    static boolean isEven(int n) {
        // code here
        int lastDigit = n%10;
        if(lastDigit%2==0){
            return true;
        }
        else{
            return false;
        }
    }
}