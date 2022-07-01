class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
         vector<int> v;
        int c=0;
        for(int i=0;i<capacity.size();i++){
             v.push_back(capacity[i]-rocks[i]);
        }
         sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
           if(additionalRocks>=v[i]){
                additionalRocks=additionalRocks-v[i];
                v[i]=0;
           }   
            else break;
        }
          for(int i=0;i<v.size();i++){
              if(v[i]==0) c++;
          }
        return c;
    }
};