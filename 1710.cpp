class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
         return a[1]>b[1];

    }
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        sort(nums.begin(),nums.end(),cmp); 
        int unit=0;
        for(int i=0;i<nums.size();i++){
            if(truckSize>0){ 
                if(truckSize>nums[i][0]){
                    unit+=nums[i][0]*nums[i][1];
                    truckSize-=nums[i][0];
                    cout<<unit<<" ";
                }
                else if(truckSize>0){
                    unit+=truckSize*nums[i][1];
                    truckSize-=nums[i][0];
                }
                
            }
            else{
                break;
            }
        }
        return unit;
    }
};