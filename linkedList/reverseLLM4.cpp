/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
    public:
    Node* reverse(Node*curr,Node*&head)
    {
        if(!curr||!curr->next)
        {
            head=curr;
            return curr;
        }
          
          Node*ans=reverse(curr->next,head);
          ans->next=curr;
          curr->next=nullptr;
          return curr;
    }
      Node* reverseList(struct Node* head) {
          Node*curr=head;
          curr=reverse(curr,head);
          return head;
      }
  };