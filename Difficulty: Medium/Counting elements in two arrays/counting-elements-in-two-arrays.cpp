class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        vector<int> result (n);
        int maxA = *max_element(a.begin(),a.end());
        
        vector<int> freq(maxA + 1,0);
        
        for(int i=0;i<m;i++){
            if(b[i]<=maxA){
                freq[b[i]]++;
            }
        }
        for(int i=1;i<=maxA;i++){
            freq[i]+=freq[i-1];
        }
        for(int i=0;i<n;i++){
            result[i] = freq[a[i]];
        }
        return result;
    }
};