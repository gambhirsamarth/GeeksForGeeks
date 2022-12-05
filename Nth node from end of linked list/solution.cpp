

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)

{

       // Your code here

       Node* curr=head;

       Node* prev=head;

       int c=0;

       while(curr!=NULL){

           if(c>=n)

           prev=prev->next;

           curr=curr->next;

           c++;

       }

       if(c<n)

       return -1;

       return prev->data;

}
