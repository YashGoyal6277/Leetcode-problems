class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
         for(int i=0;i<s.size();i++){
             v[s[i]-'a']++;
         }
          unordered_set<int> mp;
        int del=0;
         for(int i=0;i<26;i++){
              int freq=v[i];
              while(freq>0){
                  if(mp.find(freq)!=mp.end()){
                      del++;
                      freq--;
                  }
                  else break;
              }
             if(freq!=0){
                 mp.insert(freq);
             }
         }
        return del;
    }
};