class Solution {
    public int maxCircularSum(int arr[]) {
        // code here
        
        int total =0, maxSum = arr[0],minSum = arr[0];
        int currMax = 0, currMin = 0;
        
        for(int num:arr){
            currMax = Math.max(currMax+num,num);
            maxSum = Math.max(maxSum,currMax);
            
            currMin = Math.min(currMin+num,num);
            minSum = Math.min(minSum,currMin);
            
            total+=num;
        }
        
        return (total==minSum)?maxSum: Math.max(maxSum,total-minSum);
    }
}
