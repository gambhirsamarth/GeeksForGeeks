class Solution
{
   
    static int countNodesinLoop(Node head)
    {
        
        if(head==null && head.next==null){
            return 0;
        }
        Node slow=head;
        Node fast=head;
        boolean isCycle=false;
        
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
            if(fast==slow){
                isCycle=true;
                break;
            }
        }
        int cnt=1;
        
        if(!isCycle) return 0;
        
        if(isCycle){
            fast=fast.next;
            while(fast!=slow){
                cnt++;
                fast=fast.next;
            }
        }
        return cnt;
    }
}
