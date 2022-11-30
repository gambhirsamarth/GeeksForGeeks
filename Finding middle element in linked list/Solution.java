

/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
*/

class Solution

{

    int getMiddle(Node head)

    {

         // Your code here.

         int count =1;

         Node curr = head;

         Node prev= head;

         while(curr.next != null){

             curr = curr.next;

             count++;

         }

         int length = count/2+1;

         int l=1;

         while(l<length){

             prev = prev.next;

             l++;

         }

         return prev.data;

         

    }

}
