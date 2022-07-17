class Solution {
public:
    int minOperations(vector<int>& arr, vector<int>& numsDivide) {
         int newgcd=0;
         for(int i=0;i<numsDivide.size();i++){
             newgcd=__gcd(newgcd,numsDivide[i]);
         }
        sort(arr.begin(),arr.end());
         for(int i=0;i<arr.size();i++){
             if(newgcd%arr[i]==0){
                 return i;
             }
         }
        return -1;
        
    }
};