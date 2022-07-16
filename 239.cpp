class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
         vector<int> ng(n);
         ng[n-1]=n;
         stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
        while(st.size()>0 and nums[st.top()]<nums[i]){
            st.pop();   
        }    
            if(st.size()==0){
                ng[i]=n;
            }
            else{
                ng[i]=st.top();
            }
            st.push(i);
        }
        \
        vector<int> ans(n-k+1);
        int j=0;
         for(int i=0;i<n-k+1;i++ ){
             if(i>j) j=i;
             while(ng[j]<i+k){
                 j=ng[j];
             }
             ans[i]=nums[j];
         }
        return ans;
    }
};