C++
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1) return list2;
        else if(!list2) return list1;

        ListNode*curr=new ListNode(1);
        ListNode*head=curr;
        while(list1&&list2)
        {

            if(list1->val==list2->val)
            {
                curr->next=new ListNode(list1->val);
                curr=curr->next;
                curr->next=new ListNode(list1->val);
                list1=list1->next;
                list2=list2->next;
                curr=curr->next;
            }
            else if(list1->val>list2->val)
            {
                curr->next=new ListNode(list2->val);
                list2=list2->next;
                curr=curr->next;
            }
            else if(list1->val<list2->val)
            {
                curr->next=new ListNode(list1->val);
                curr=curr->next;
                list1=list1->next;

            }
        }
        if(!list1 && list2) curr->next=list2;
        else if(!list2 && list1) curr->next=list1;
        else
        {
            curr->next=NULL;
        } 
        return head->next;
    }
};