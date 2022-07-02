class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
           hc.push_back(0);
           hc.push_back(h);
           vc.push_back(0);
           vc.push_back(w);
        long long modulo=1000000007;
        long long maxhc=0,maxvc=0;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        for(int i=1;i<hc.size();i++){
            maxhc=max(maxhc,(long long)hc[i]-hc[i-1]);
        }
        for(int i=1;i<vc.size();i++){
            maxvc=max(maxvc,(long long)vc[i]-vc[i-1]);
        }
        return (maxhc*maxvc)%modulo;
    }
};