class Solution {
public:
    int consecutiveNumbersSum(int n) {
         int k=1;
        int ans=0;
        int con=k*(k-1)/2;
         while(con<n){
             if((n-con)%k==0) ans++;
              k++;
              con=k*(k-1)/2;
         }
        return ans;
        
    }
};