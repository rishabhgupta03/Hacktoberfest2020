/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode n, int val) {
        ListNode head=n;
        while(head!=null && head.next!=null)
        {
            if(head.next.val==val)
                head.next=head.next.next;
            else
                head=head.next;
        }
        if(n!=null && n.val==val)n=n.next;
        return n;
    }
}
