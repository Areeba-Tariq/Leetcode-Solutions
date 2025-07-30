//easy sol=>copy data of 2 list in another list
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //easy approch =>make new linkedlist and copy val
        ListNode*ptr1=list1;
        ListNode*ptr2=list2;
        ListNode*head=new ListNode(0);
        ListNode*curr=head;
        while(list1&&list2)
        {
            if(list1->val>list2->val)
            {
            curr->next=new ListNode(list2->val);
            curr=curr->next;
            list2=list2->next;
            }
            else if(list1->val<list2->val)
            {
            curr->next=new ListNode(list1->val);
            curr=curr->next;
            list1=list1->next;
            }
            else
            {
                curr->next=new ListNode(list1->val);
                curr=curr->next;
                curr->next=new ListNode(list2->val);
                curr=curr->next;
                list1=list1->next;
                list2=list2->next;
                

            }
        }
        while(list1)
        {
            curr->next=new ListNode(list1->val);
            curr=curr->next;
            list1=list1->next;
        }
        while(list2)
        {
            curr->next=new ListNode(list2->val);
            curr=curr->next;
            list2=list2->next;
        }
        return head->next;
    }
};