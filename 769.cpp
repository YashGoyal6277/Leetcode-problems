class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size()==0) return 0;
        int mx=INT_MIN;
        int res=0;
        for(int i=0;i<arr.size();i++){
            mx=max(mx,arr[i]);
            if(mx==i) res++;
        }
        return res;
    }
};