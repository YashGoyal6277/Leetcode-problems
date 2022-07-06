class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
         int oinc=nums[0];
         int oexc=0;
         for(int i=1;i<nums.size()-1;i++){
             int ninc=nums[i]+oexc;
             int nexc=max(oexc,oinc);
             oinc=ninc;
             oexc=nexc;
         }
        int res1=max(oinc,oexc);
         oinc=nums[1];
          oexc=0;
         for(int i=2;i<nums.size();i++){
              int ninc=nums[i]+oexc;
              int nexc=max(oexc,oinc);
             oinc=ninc;
             oexc=nexc;
         }
        int res2=max(oinc,oexc);
       return max(res1,res2);
    }
};