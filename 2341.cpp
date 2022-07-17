class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> v;
        int p=0,r=0;
         for(auto x:mp){
             p=p+(x.second/2);
             r+=(x.second%2);
         }
        v.push_back(p);
        v.push_back(r);
        return v;
    }
};