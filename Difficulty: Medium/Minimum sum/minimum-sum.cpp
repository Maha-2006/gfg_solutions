class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        string num1 = "",num2 = "";
        
        for(int i=0;i<arr.size();i++){
            if(i%2==0)
            num1 += (arr[i]+'0');
            else
            num2 += (arr[i]+'0');
        }
        
        string result = "";
        int i=num1.size()-1,j=num2.size()-1,carry=0;
        while(i>=0||j>=0||carry){
            int digit1 = (i>=0) ? num1[i--] - '0' : 0;
            int digit2 = (j>=0) ? num2[j--] - '0' : 0;
            int sum = digit1+digit2+carry;
            result += (sum%10+'0');
            carry = sum/10;
        }
        reverse(result.begin(),result.end());
        
        int pos=result.find_first_not_of('0');
        if(pos==string::npos)
        return "0";
        return result.substr(pos);
    }
};