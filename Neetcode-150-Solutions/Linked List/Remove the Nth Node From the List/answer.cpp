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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Edge case if the list is empty we cannot remove a node
        if(head->next == NULL){
            return NULL;
        }
        ListNode* slow = head; // This pointer will eventually point to the node before the node that needs to removed
        ListNode* fast = head; // This pointer is used to create a gap of n nodes between slow and fast

        // Move the fast pointer n steps ahead
        // This ensures after the next traversal of the list
        // slow will point to the node right before the node
        // that needs to be deleted
        while(n > 0){
            fast = fast->next;
            n--;
        }
        // Edge case if fast becomes NULL after the loop 
        // It means n was equal to length of the list
        if(fast == NULL){
            return head->next;
        }

        // Move both pointers together, until fast has reached the end of the list
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        // Remove the nth node, slow->next is updated to bypass the node that needs to be deleted
        slow->next = slow->next->next;
        
        // Return the modified list
        return head;
    }
};