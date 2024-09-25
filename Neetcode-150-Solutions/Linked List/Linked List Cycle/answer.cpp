/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // If the head is NULL, the list is empty there can not be a cycle
        if(head == NULL){
            return false;
        }
        // Initialize two pointers, slow and fast, both starting at head
        ListNode* slow = head; // moves one steps at a time
        ListNode* fast = head; // moves two steps at a time
        
        // Use two pointers to iterate, and keep checking if fast is NULL to safely move
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next; // slow moves one step
            fast = fast->next->next; // fast moves two steps
            // If slow and fast are equal there is a cycle
            if(slow == fast){ 
                return true;
            }
        }
        return false;
    }
};