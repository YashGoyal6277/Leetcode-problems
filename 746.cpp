class Solution {
public:
  
        int dp[1001];
 int f(vector<int> &cost,int i,int n)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
		//pay the cost the climb one step
        int a=cost[i]+f(cost,i+1,n);
		//or pay the cost and climb 2 steps
        int b=cost[i]+f(cost,i+2,n);
        return dp[i]= min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int n = cost.size();
		//As told in question you can either start from inx '0' or '1'.
        return min(f(cost,0,n),f(cost,1,n));
    }
    // tabulation
//      int n = cost.size();
//         vector<int> dp(n+1,0);
        
//          dp[0] = cost[0];
//          dp[1] = cost[1];
//          for(int i = 2 ; i <= n ; i++){
            
//              if(i==n) dp[i] = min(dp[i-1],dp[i-2]);
//              else  dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
            
//         }
        
//         return dp[n];
};
