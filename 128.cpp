class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // approach 1 -- using priority queue
        
//         if(nums.size()==0) return 0;
//     priority_queue <int, vector<int>, greater<int> > pq;
//        for(int i=0;i<nums.size();i++) pq.push(nums[i])        ;
//          int c=1;
//          int f=pq.top();pq.pop();
//         int ans=1;
//           while(!pq.empty()){
//               int s=pq.top();pq.pop();
//                if(f+1==s){
//                    c++;
//                    ans=max(c,ans);
//                }
//               else if(f==s){
                  
//                   continue;
//               }
//                else{
//                    c=1;
//                }
//                f=s;
//           }
//         return ans;
        
        // approach 2-- hash map
        if(nums.size()==0) return 0;
        unordered_map<int,int> mp;
        int c=1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)!=mp.end()){
            
                continue;
            }
            else {
                c=1;
                int p=nums[i]+1;
                  while(mp.find(p)!=mp.end()){
                      c++;
                      p++;
                  }
              ans=max(ans,c);

            }
        }
        return ans;
    }
};