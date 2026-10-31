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
    void reorderList(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      if(head==NULL || fast->next==NULL)
      {
        return;
      }
       while(fast->next!=NULL && fast->next->next!=NULL)
       {
        slow=slow->next;
        fast=fast->next->next;
       } 
       ListNode* first=head;
       ListNode* second=slow->next;
       slow->next=NULL;
       ListNode* pre=NULL;
       ListNode* cur=second;
       while(cur!=NULL)
       {
        ListNode* nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
       }
       second=pre;
       
       while(second !=NULL)
       {
        ListNode* t1=first->next;
       ListNode* t2=second->next;
       first->next=second;
       second->next=t1;
       first=t1;
       second=t2;
    }
    }
};