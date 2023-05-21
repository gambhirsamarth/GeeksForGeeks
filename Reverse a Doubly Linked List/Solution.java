public static Node reverseDLL(Node  head)
{
   Node next=head;
   Node temp=head;
   Node prev=null;
   while(next!=null){
       next=next.next;
       temp.next=prev;
       temp.prev=next;
       prev=temp;
       temp=next;
   }
   return prev;
}
