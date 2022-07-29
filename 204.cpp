class Solution {
public:
    int countPrimes(int n) {
         if(n<2) return 0;
         vector<bool> v(n+1,true);
          v[0]=false,v[1]=false;
          for(int i=2;i*i<=n;i++){
             if(v[i]==false){
                 continue;
             }    
            for(int k=i;i*k<=n;k++){
                v[i*k]=false;
            }
          }
        int c=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==true) c++;
        }
        return c;
    }
};