class Solution {
public:
    
    
    int findDuplicate(vector<int>& nums) {
      int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
             slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
    
    
    // 2 method using hashmap
//     int findDuplicate(vector<int>& nums) {
//           unordered_map<int,int> mp;
//          for(int i=0;i<nums.size();i++){
//               mp[nums[i]]++;
//          }
//         for(auto x:mp){
//             if((x.second)>1) return x.first;
            
//         }
//         return {};
//     }
// };