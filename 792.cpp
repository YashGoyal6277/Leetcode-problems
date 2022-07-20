class Solution {
public:
    bool found(string sub,string s){
        int idx=s.find(sub[0]);
        if(idx==-1) return false;
        
           int pos=1;
            while(pos<sub.size()){
                idx=s.find(sub[pos],idx+1);
                if(idx==-1)
                    return false;
                pos++;
            }
                    return true;

        
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int c=0;
        for(string w:words){
            if(found(w,s))
            c++;
        }
        return c;
    }
};