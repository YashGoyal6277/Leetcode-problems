class Solution {
public:
    	int dp[101];

    int rob(vector<int>& nums) {
        // int oinc=nums[0];
        //  int oexc=0;
        //  for(int i=1;i<nums.size();i++){
        //      int ninc=nums[i]+oexc;
        //      int nexc=max(oexc,oinc);
        //      oinc=ninc;
        //      oexc=nexc;
        //  }
        // return max(oinc,oexc);
        
         int n = nums.size();
		if(n==1)
		return nums[0];
		memset(dp,-1,sizeof(dp));
       return  helper(nums,n-1);
    }
    int helper(vector<int>& nums,int i){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
         int x=helper(nums,i-2)+nums[i];
         int y=helper(nums,i-1);
         return dp[i]=max(x,y);
    }
};