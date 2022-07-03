/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         int top=0,down=m-1,left=0,right=n-1;
        int c=1;
        vector<vector<int>> matrix(m,vector<int>(n));
        int dir=0;
        while(top<=down and left<=right){
            if(dir==0){
            for(int i=left;i<=right;i++){
                if(head){
                   matrix[top][i]=head->val;
                 head=head->next;
                    
                }
                else{
                    matrix[top][i]=-1;
                }
                }
              top++;
                
            }
            else if(dir==1){
            for(int i=top;i<=down;i++){
                if(head){
                matrix[i][right]=head->val;
                head=head->next;    
                }
                else {
                    matrix[i][right]=-1;
                }
                
            }
            right--;
                
            }
            
           else if(dir==2){
                for(int i=right;i>=left;i--){
                     if(head){
                matrix[down][i]=head->val;
                head=head->next;    
                }
                else {
                    matrix[down][i]=-1;
                }
                    
                }
                down--;
               
           } 
            
            else if(dir==3){
                for(int i=down;i>=top;i--){
                     if(head){
                matrix[i][left]=head->val;
                head=head->next;    
                }
                else {
                    matrix[i][left]=-1;
                }
                    
                }
                left++;
            }
            dir++;
            dir=dir%4;
            
        }
       return matrix;
    }
};