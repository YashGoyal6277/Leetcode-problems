class Solution {
public:
    bool ok(int n,vector<int> &batteries,long timeSpan)
{
    long currBatSum=0;
	long targetBatSum=n*timeSpan; 
    for(auto it:batteries)
    {
        if(it<timeSpan)
            currBatSum+=it;
        else
            currBatSum+=timeSpan;
        
        if(currBatSum>=targetBatSum)
            return true;  
    }
    
    return false;
 }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum=0;
        for(auto x:batteries)
            sum+=x;
        long long start=0,end=sum;
        long long res=0;
         while(start<=end){
             long long avg=end +(start-end)/2;
              if(ok(n,batteries,avg)){
                  res=avg;
                  start=avg+1;
              }
             else end=avg-1;
         }
        return res;
        
    }
};