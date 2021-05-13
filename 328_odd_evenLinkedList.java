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
    public ListNode oddEvenList(ListNode head) {
        
         if(head==null || head.next==null){
            return head;
        }else{
            ListNode headOdd=head;
          ListNode headEven = head.next;
           ListNode odd=headOdd;
            ListNode even=headEven;
        while(even!=null){
            if(even.next!=null){
           odd.next=even.next;
            }
            else{
                odd.next=headEven;
                return headOdd;
            }
            odd=odd.next;
            even.next=odd.next;
            even=even.next;
           
            
           
          
           
        }
            odd.next=headEven;
              return headOdd;
        
      
        }
      
    }
}
