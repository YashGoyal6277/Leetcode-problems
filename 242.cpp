class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
          vector<int> v(26,0);
         for(int i=0;i<s.size();i++){
                 v[s[i]-'a']++;
                 v[t[i]-'a']--;
             
         }
        for(int j=0;j<s.size();j++){
                
            if(v[s[j]-'a']!=0){
                return false;
            }
            
        }
        return true;
    }
};