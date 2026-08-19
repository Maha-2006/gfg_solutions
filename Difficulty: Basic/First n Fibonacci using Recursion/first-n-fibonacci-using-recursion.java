class Solution {
    // Function to return list containing first n fibonacci numbers.
    public static int[] fibonacciNumbers(int n) {
        // Your code here
        int arr[] = new int[n];
        if(n>=1){
            arr[0] = 0;
        }
        if(n>=2){
            arr[1] = 1;
        }
        for(int i=2;i<n;i++){
            arr[i] = arr[i-2]+arr[i-1];
        }
        return arr;
    }
}