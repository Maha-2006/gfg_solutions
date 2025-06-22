class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int original = n;
        int count = 0;
        
        while(n>0){
            int digit = n%10;
            n/=10;
            
            if(digit==0) continue;
            if(original%digit==0)
            count++;
        }
        return count;
    }
};