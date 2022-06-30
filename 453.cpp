class Solution {
public:
    int minMoves(vector<int>& nums) {
         int min=*min_element(nums.begin(),nums.end());
         int c=0;
        for(int i=0;i<nums.size();i++){
                c+=nums[i]-min;
        }
        return c;
    }
};