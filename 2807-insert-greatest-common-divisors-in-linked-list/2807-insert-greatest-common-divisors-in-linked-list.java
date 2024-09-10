class Solution {
    public ListNode insertGreatestCommonDivisors(ListNode head) {
       ListNode curr = head;
        while (curr != null && curr.next != null) {
            // Create a new node with the GCD of curr and curr.next
            int gcdValue = gcd(curr.val, curr.next.val);
            ListNode newNode = new ListNode(gcdValue);
            
            // Insert the new node between curr and curr.next
            newNode.next = curr.next;
            curr.next = newNode;
            
            // Move curr two steps forward to avoid infinite loop
            curr = newNode.next;
        }
        return head;
    }
    
    public int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
}