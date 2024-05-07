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
   ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* doubleIt(ListNode* head) {
        ListNode* rh = reverse(head);
        ListNode* newHead = rh;
        int carry = 0;
        while(rh)
        {
            int p = rh->val*2 + carry;
            rh->val = p%10;
            carry = p/10;
            if(!rh->next)
            {
                if(carry)
                {
                    rh->next = new ListNode(carry);
                    carry = 0;
                    rh = rh->next;
                }
            }
            rh = rh->next;
        }
        return reverse(newHead);
    }
};