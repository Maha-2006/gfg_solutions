class Solution {
    public static String reverseString(String s) {
        // code here
        String result = " ";
        for(int i=s.length()-1;i>=0;i--){
            result = result+s.charAt(i);
        }
        return result;
        
    }
}