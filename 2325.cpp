class Solution {
public:
    string decodeMessage(string key, string message) {
        string s="";
           char ch='a';
          unordered_map<char,char> mp;
          for(auto c:key){
               if(mp.find(c)==mp.end() and c!=' '){
                   mp[c]=ch;
                   ch++;
               }
          }
        for(auto c:message){
            if(c==' '){
                s+=" "; 
            }else
             s+=mp[c];
        }
             return s; 
        
    }
};