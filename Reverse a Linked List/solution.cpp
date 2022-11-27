/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
     struct Node * temp=nullptr;
     struct Node * ptr=nullptr;
     while(head!=nullptr)
     {
         temp=head->next;
         head->next=ptr;
         ptr=head;
         head=temp;
     }
     head=ptr;
     return head;
    }
    
};
    
