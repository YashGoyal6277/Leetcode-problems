class Solution {
public:
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<char> v(n+2);
         v[0]='L';
          v[n+1]='R';
         for(int i=1;i<=n;i++){
             v[i]=dominoes[i-1];
         }
          int pi=0;
          for(int i=1;i<v.size();i++){
              if(v[i]=='L'){
                  if(v[pi]=='L'){
                      for(int x=pi+1;x<i;x++){
                          v[x]='L';
                      }
                  }
                  else if(v[pi]=='R'){
                      int low=pi+1;
                       int high=i-1;
                      while(high>low){
                          v[low]='R';
                           v[high]='L';
                          high--;low++;
                      }
                  }
                 pi=i; 
              }
              else if(v[i]=='R'){
                   if(v[pi]=='L'){
                      // do nothing
                  }
                  else if(v[pi]=='R'){
                      for(int x=pi+1;x<i;x++){
                          v[x]='R';
                      }
                  }
                  pi=i;
              }
          }
        string ans;
         for(int i=1;i<v.size()-1;i++){
             ans+=v[i];
         }
        return ans;
    }
};