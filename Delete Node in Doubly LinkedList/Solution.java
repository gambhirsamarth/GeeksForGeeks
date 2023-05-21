class Solution
{
    // function returns the head of the linkedlist
    Node deleteNode(Node head,int x){
        if(head==null || x<=0)
        return head;


      Node curr=head;
      for(int i=1;i<x;i++)
      {
       curr=curr.next;   
      }
      
      if(curr==head)
        return head.next;
      if(curr.prev!=null)
        curr.prev.next=curr.next;
      if(curr.next!=null)
        curr.next.prev=curr.prev;
        
      return head;
    }
}
