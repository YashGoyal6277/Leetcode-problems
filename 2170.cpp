class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> mpo,mpe;
        int odd=0,even=0;
         for(int i=0;i<nums.size();i++){
             if(i%2) {
                 mpo[nums[i]]++;
                 odd++;
                 }
             else {
                 mpe[nums[i]]++;
                 even++;
             }
         }
        int odd_first=0;
        int odd_first_val=0;
        int odd_second=0;
        int odd_second_val=0;
        for(auto it=mpo.begin();it!=mpo.end();it++){
             if(it->second>odd_first){
                 odd_second=odd_first;
                 odd_second_val=odd_first_val;
                 odd_first=it->second;
                 odd_first_val=it->first;
                 
             }
            else if(it->second>odd_second){
                odd_second=it->second;
                odd_second_val=it->first;
            }
        }
        
        int even_first=0;
        int even_first_val=0;
        int even_second=0;
        int even_second_val=0;
        for(auto it=mpe.begin();it!=mpe.end();it++){
             if(it->second>even_first){
                 even_second=even_first;
                 even_second_val=even_first_val;
                 even_first=it->second;
                 even_first_val=it->first;
                 
             }
             else if(it->second>even_second){
                even_second=it->second;
                even_second_val=it->first;
            }
        }
        cout<<even_first_val<<" "<<odd_first_val;
        if(odd_first_val!=even_first_val){
             int x=odd-odd_first;
              int y=even-even_first;
              return x+y;
        }
          int r11=odd-odd_first;
            int r21=even-even_second;
            
            int r12=odd-odd_second;
             int r22=even-even_first;
           

            return min(r11+r21,r12+r22);
    
    }
};