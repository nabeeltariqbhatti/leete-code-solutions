/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head || !(head->next)){
            return head;
        }else{
        ListNode* odd;
        ListNode* even;
        ListNode* headOdd;
        ListNode* headEven;
            
            headOdd=head;
            headEven = head->next;
            odd=head;
            even=headEven;
        while(even){
            if(even->next){
           odd->next=even->next;
            }
            else{
                odd->next=headEven;
                return headOdd;
            }
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
           
            
           
          
           
        }
            odd->next=headEven;
              return headOdd;
        
      
        }
      
         
        
    }
};
