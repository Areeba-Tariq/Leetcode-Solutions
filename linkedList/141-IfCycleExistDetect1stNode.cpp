/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//after floydCycleDetection return u node where slow and fast meet,place slow at head and fast as is,then move slow and fast 
//by 1 point and when slow==fast then return slow or fast(point of cycle)
class Solution {
public:
ListNode* FloydCycleDetection(ListNode*head)
{
    ListNode*fast=head;
    ListNode*slow=head;
    while(fast!=nullptr && fast->next !=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return fast;
    }
    return nullptr;
}
    ListNode *detectCycle(ListNode *head) {
        //first lets detect cycle-floyd cycle detection algo
        ListNode* fast=FloydCycleDetection(head);
        ListNode*slow;
        if(fast)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
        else
        {
            return fast;
        }
    }
};