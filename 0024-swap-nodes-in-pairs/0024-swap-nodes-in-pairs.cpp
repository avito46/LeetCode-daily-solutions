/*
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
    ListNode* swapPairs(ListNode* head) {
       ListNode* dummy = new ListNode(0, head);
       ListNode* prev=dummy;
       ListNode* first;
       ListNode* second;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        
      while (prev != nullptr && prev->next != nullptr && prev->next->next!=NULL)
      {
         
         first=prev->next;
         second=first->next;
         ListNode* temp=second->next;
         prev->next=second;
         second->next=first;
         first->next=temp;
         prev=first;
      }
      return dummy->next;
    }
};
    