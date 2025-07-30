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
       if (!head || !head->next) return head;//if have 0 or 1 node
       else //having >1 node
       { 
            ListNode*prev=nullptr;
            ListNode*curr=head;
            ListNode*adv=curr->next;
            while(curr)
            {
                curr->next=prev;
                prev=curr;
                curr=adv;
                if(adv)
                {
                    adv=adv->next;
                }
            }
            return prev;
       }
        
    }
};