class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<dp.size();i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]){
                    dp[i]=min(dp[i],dp[i-coins[j]]);
                }
                
            }
            if(dp[i]!=INT_MAX)
            dp[i]++;
        }
                return dp[amount] == INT_MAX ? -1 : dp[amount];

    }
};