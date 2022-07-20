class Solution {
public:
 
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
      stack<pair<int,int>> s;
      s.push({arr[0][0],arr[0][1]});
      for(int i=1;i<arr.size();i++){
          int stime=arr[i][0];
          int etime=arr[i][1];
          int start=s.top().first;
          int end=s.top().second;
          if(stime<=end){
              s.pop();
              s.push({start,max(etime,end)});
          }
          else{
            s.push({stime,etime});
          }
      }
      vector<vector<int>> res;
   while(s.size()>0){
      int start=s.top().first;
       int end=s.top().second;
       res.push_back({start,end});
       s.pop();
         
   }
   reverse(res.begin(),res.end());
        return res;
    }
};