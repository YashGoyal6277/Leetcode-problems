class Solution {
public:
    int minDeletion(vector<int>& nums) {
         int del=0;
         for(int i=0;i<nums.size()-1;i++){
             if((i-del)%2==0 and nums[i]==nums[i+1] )
             {
                 int k=i+1;
                 while(k<nums.size() and nums[k]==nums[i]){
                     del++;
                     k++;
                 }
                 i=k-1;
             }
            
         }
        if((nums.size()-del)&1) del++;
        return del;
    }
};