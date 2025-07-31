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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //finding total nodes
        ListNode*curr=head;
        int totalNodes=1;
        if(!head) return nullptr;
        while(curr->next)
        {
            curr=curr->next;
            totalNodes++;
        }
        if(totalNodes==n)
        {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int jumpRequire=(totalNodes-n)-1;
        curr=head;
        int count=0;
        ListNode*nodeToDel=nullptr;
        while(count<jumpRequire)
        {
            curr=curr->next;
            count++;
        }
        if(curr->next!=nullptr)
        {
            nodeToDel=curr->next;
            curr->next=curr->next->next;
            nodeToDel->val=0;
            nodeToDel->val=0;
            nodeToDel->next=nullptr;
            delete nodeToDel;
            
        }
        return head;
    }
};