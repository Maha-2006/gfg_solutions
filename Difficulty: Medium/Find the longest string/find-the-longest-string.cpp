class Solution {
  public:
    string longestString(vector<string> &words) {
        // code here
        sort(words.begin(),words.end());
        unordered_map<string,bool> map;
        string ans = "";
        
        for(int i=0;i<words.size();i++){
            string word = words[i];
            
            if(word.size()==1){
                map[word] = true;
            }else{
                string prefix = word.substr(0,word.size()-1);
                if(map[prefix]){
                    map[word] = true;
                }else{
                    map[word] = false;
                }
            }
            if(map[word] && word.size() > ans.size()){
                ans=word;
            }
        }
        return ans;
    }
};