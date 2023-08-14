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
    ListNode* deleteDuplicates(ListNode* h) {
        struct ListNode* temp=h;
        map<int,int>s;
       struct ListNode* t=nullptr; 
        struct ListNode* p=nullptr;

        int len=0;

        while(temp!=NULL){
           
            len++;
            s[temp->val]++;
            
             temp=temp->next;
        }
        if(len==1) return h;
       for(auto i:s){
           if(i.second==1){
               struct ListNode* temp= new ListNode(i.first);   
           if(p==nullptr)
           {
               p=temp;
               t=p;
               continue;
            
           }
         
               t->next=temp;
         
               t=t->next;
          
           }
           
       }
        return p;
    }
};