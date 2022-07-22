class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int s=-1,e=-1;
         int ans=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]<=right and nums[i]>=left){
              e=i;
              ans+=e-s;
              cout<<ans<<" ";
             
          }
          else if(nums[i]<left){
              ans+=e-s;
          }
          else if(nums[i]>right){
               e=i;
               s=i;
              
          }
      }
        return ans;
    }
};