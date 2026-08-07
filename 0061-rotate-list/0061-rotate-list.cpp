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
     ListNode* tail=head;
     ListNode* temp=head;
     int n=1;
      if(head==NULL)
     {
        return NULL;
     } 
     while(tail->next !=NULL)
     {
        n++;
        tail=tail->next;
     }
     int K=k%n;
     int index=n-K;
     if(K==0)
     {
        return head;
     }
     for(int i=0;i<index-1;i++)
     {
        temp=temp->next;
     } 
     ListNode* h1=temp->next;
     tail->next=head;
     temp->next=NULL;
     head=h1;
     return h1;   
    }
};