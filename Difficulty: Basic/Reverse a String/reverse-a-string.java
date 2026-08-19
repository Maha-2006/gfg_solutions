class Solution {
    public static String reverseString(String s) {
        // code here
        StringBuilder res = new StringBuilder();
        
        for(int i=s.length()-1;i>=0;i--){
            res.append(s.charAt(i));
        }
        return res.toString();
        
    }
}