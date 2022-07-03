class Solution {
public:
    int ans = 0;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        if(n<=forget)
            (ans++)%1000000007;
        for(int i=delay;i<forget;i++)
            if(n-i>0) peopleAwareOfSecret(n-i,delay,forget);
        return ans%1000000007;
    }
};