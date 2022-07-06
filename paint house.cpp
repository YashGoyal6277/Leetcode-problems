#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long v[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int color;
            cin>>color;
            v[i][j]=color;
        }
    }
    

        long dp[n][3];

    dp[0][0]=v[0][0];
    dp[1][0]=v[0][1];
    dp[2][0]=v[0][2];
    for(int i=1;i<n;i++){
         dp[0][i]=v[i][0]+min(dp[1][i-1],dp[2][i-1]);
         
         dp[1][i]=v[i][1]+min(dp[0][i-1],dp[2][i-1]);
         

         dp[2][i]=v[i][2]+min(dp[1][i-1],dp[0][i-1]);
         
    }
      long ans=min(dp[0][n-1],min(dp[1][n-1],dp[2][n-1]));
    cout<<ans;
    
}