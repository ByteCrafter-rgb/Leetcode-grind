/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if(null == head || null == head.next) {
            return head;
        }

        ListNode curNode = head, prevNode = null, tmp = head.next;

        while(tmp != null) {
            
            curNode.next = prevNode;
            prevNode = curNode;
            curNode = tmp;
            tmp = tmp.next;
            // System.out.println("cur: " + curNode.val + " prev: " + prevNode.val + " next: " + tmp);
        
        }
        curNode.next = prevNode;
        head = curNode;
        // System.out.println(head.val);
        // System.out.println(head.next);
        return head;
    }
}
