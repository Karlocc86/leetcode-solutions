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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode dummy(0);
        ListNode* current = head;
        ListNode* linker = &dummy;

        while(current != nullptr){

            if(current -> val == val ){
                current = current -> next;
                
            }
            else{

                linker -> next = current;
                current = current -> next;
                linker = linker -> next;

            }

          
        }

        linker -> next = nullptr;

        return dummy.next;

    }
};