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
        // Dummy node to simplify the process of building the result list
        ListNode* dummy = new ListNode();
        // Pointer to track the current node
        ListNode* curr = dummy;
        int carry = 0;

        // As long as there are nodes in either list iterate
        while(l1 != NULL || l2 != NULL){
            // If not null assign the value, otherwise use 0
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;

            // Add the two numbers as well as the carry
            int sum = val1 + val2 + carry;
            // If sum is greater than 10 there is a carry, otherwise it remains 0
            carry = sum / 10;

            // Create a new node for the result list, the value will be the last digit of the sum
            curr->next = new ListNode(sum % 10);
            // Update to point to the next element
            curr = curr->next;

            // Move the pointers as long as they are not null
            if(l1 != NULL){
                l1 = l1->next;
            }
            if(l2 != NULL){
                l2 = l2->next;
            }
        }
        // If there is still a 
        if(carry == 1){
            curr->next = new ListNode(1);
        }
        // Return the head of the list, since dummy is a placeholder node           
        return dummy->next;
    }
};