class Solution {
public:
    int prec(char op){
        if(op=='+' || op=='-') return 1;
        return 2;
    }
    int operation(int v1,int v2,char op){
        if(op=='+') return v1+v2;
        else if(op=='-') return v1-v2;
        else if(op=='/') return v1/v2;
         return v1*v2;
        
    }
    int calculate(string s) {
          stack<int> vstack;
          stack<char> op;
           for(int i=0;i<s.size();i++){
                
                if(s[i]>='0' and s[i]<='9'){
                   string val;
                   while(i<s.size() &&  s[i]>='0' && s[i]<='9'){
                       val+=s[i];
                       i++;
                   }
                   i--;
                  vstack.push(stoi(val));     
               }
               else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                   while(op.size()>0 and prec(op.top())>=prec(s[i])){
                       int v2=vstack.top();vstack.pop();
                       int v1=vstack.top();vstack.pop();
                       char o=op.top();op.pop();
                       int res=operation(v1,v2,o);
                       vstack.push(res);    
                   }
                   op.push(s[i]);
               }
           }
        while(op.size()>0){
             int v2=vstack.top();vstack.pop();
                       int v1=vstack.top();vstack.pop();
                       char o=op.top();op.pop();
                       int res=operation(v1,v2,o);
                       vstack.push(res);    
        }
    return vstack.top();

    }
};