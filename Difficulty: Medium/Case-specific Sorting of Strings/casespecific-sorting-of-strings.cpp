class Solution {
  public:
    string caseSort(string& s) {
        // code here
        int n = s.length();
        vector<char> lower;
        vector<char> upper;
        
        for(char ch:s){
            if(islower(ch)){
                lower.push_back(ch);
            }else{
                upper.push_back(ch);
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        
        string result = s;
        int l =0;
        int u = 0;
        
        for(int i=0;i<n;i++){
            
        
        if(islower(s[i])){
            result[i] = lower[l++];
        }else{
            result[i]=upper[u++];
        }
        }
    
    return result;
    

}
};