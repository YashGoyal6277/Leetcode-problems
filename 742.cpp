class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
      int idx;
    int smx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=mx){
                smx=max(smx,nums[i]);
            }
            else{
                idx=i;
            }
        }
        return mx >= 2*smx ? idx : -1;
    }
};