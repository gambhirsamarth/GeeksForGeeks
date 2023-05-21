class GfG
{
    //Function to insert a new node at given position in doubly linked list.
     void addNode(Node head_ref, int pos, int data)
    {
        // Your code here
        if(head_ref==null)
   return;
        Node node= new Node(data);
        Node temp= head_ref;
        //find position
        while(temp!=null && pos>0)
        {
            temp=temp.next;
           pos--;
        }
        node.prev=temp;
        node.next=temp.next;
        if(node.next!=null){
            temp.next.prev=node;
        }
        temp.next=node;
    }
}
