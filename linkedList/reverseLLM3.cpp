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
    ListNode* reverseList(ListNode* head) {
         if(!head or head->next==NULL)
         {
             return head;
         }
         ListNode* dummyHead=NULL;
         ListNode* ptr=head;
         while(ptr!=NULL)
         {
             ListNode* newnode=new ListNode(ptr->val);
             newnode->next=dummyHead;
             dummyHead=newnode;
            ptr=ptr->next;
         }
         return dummyHead;
    }
    };


