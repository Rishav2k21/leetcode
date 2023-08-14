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
    ListNode* partition(ListNode* head, int x) {
        // Create 2 linked list
        ListNode* dummyA = new ListNode (0);  // stores val<x
        ListNode* dummyB = new ListNode (0);  // stores val>x
        
        ListNode* tempA = dummyA; 
        ListNode* tempB = dummyB;
        
        auto cur = head;
        
        for(auto cur = head; cur!=NULL; cur=cur->next) {
            if(cur->val < x) {
                ListNode *dummy = new ListNode(cur->val);
                tempA ->next = dummy;
                tempA = tempA->next;
            }
            else if(cur->val >= x) {
                ListNode *dummy = new ListNode(cur->val);
                tempB->next = dummy;
                tempB = tempB->next;
            }
        }
        tempA->next = dummyB->next;  // Link both LL partitions
        return dummyA->next;
    }
};
