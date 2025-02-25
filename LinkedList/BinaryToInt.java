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
    public int getDecimalValue(ListNode head) {
        int res = 0;
        ListNode tmp = new ListNode(head.val,head.next);

        String s = "";
        while(tmp!= null) {
            res = (res << 1) | tmp.val;
            tmp = tmp.next;
        }

        // int n = s.length();
        // int unit = 0;
        // for(int i= n-1;i >=0 ; i--) {
        //     res += (s.charAt(i) - '0')*(Math.pow(2,unit));
        //     unit++;
        // }
        
        
        return res;
    }
}
