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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode dummy(0);
        ListNode* curr=&dummy;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry == 1){
            int d1 = (l1 != NULL)? l1 -> val : 0;
            int d2 = (l2 != NULL)? l2 -> val : 0;

            int sum = d1 + d2;

            if(carry == 1){
                sum++;
                carry--;
            }

            if( sum >= 10){
                carry++;
                curr -> next = new ListNode(sum - 10);
            }
            else{

                curr -> next = new ListNode(sum);
            }

            curr = curr -> next;

            if( l1 != NULL) l1 = l1 -> next;
            if( l2 != NULL) l2 = l2 -> next;

        }

        return dummy.next;
    }
};