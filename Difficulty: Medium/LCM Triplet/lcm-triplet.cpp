class Solution {
  public:
    int lcmTriplets(int n) {
        // code here
        
        long res = 0;
        if(n<3){
            return n;
        }
            if(n%2==1){
                res = 1L *n*(n-1)*(n-2);
            }
            else if(n%3!=0){
                res = 1L* n*(n-1)*(n-3);
            }
            else{
            res = 1L*(n-1)*(n-2)*(n-3);
        }
        return (int)res;
}
};