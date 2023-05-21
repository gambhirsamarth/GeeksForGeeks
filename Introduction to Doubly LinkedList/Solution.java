class Solution {
    Node constructDLL(int arr[]) {
        // Code here
        Node head = new Node(arr[0]);
        Node tempNode = head;
        for(int i=1; i<arr.length ; i++){
          Node current = new Node(arr[i]);
          current.prev = tempNode;
          tempNode.next = current;
          tempNode = tempNode.next;
        }
       return head; 
    }
}
