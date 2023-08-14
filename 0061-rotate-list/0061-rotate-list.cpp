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
    ListNode* rotateRight(ListNode* head, int k) {
        struct ListNode* temp=head;  
        struct ListNode* temp1=head; 
        struct ListNode* temp2=head;
       


if(!head) return head;
       
        int len=1;
        while(temp->next){
           
            temp=temp->next;
            len++;
        }
        int p=k%len;
        temp->next=temp2;
        for(int i=0;i<len-p;i++){
          
            temp=temp->next;
          
        }
        temp2=temp->next;
        temp->next=nullptr;
      
        return temp2;
    }
};