/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Floyd’s Cycle Detection Algorithm (Tortoise and Hare)=>place slow and fast at head and move slow by 1 and fast by 2
//and when if they meet i.e slow==fast then cycle exists
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        else
        {
            ListNode*slow=head;
            ListNode*fast=head;
            while(fast &&fast->next)
            {
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast)
                {
                    return true;
                }
            }
            return false;
        }
    }
};