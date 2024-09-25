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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head; // Start at the head of the list
        ListNode* prev = nullptr; // The previous node starts as nullptr
        // Iterate until the end of the list
        while(current != nullptr){
            // Temp node to be swapped
            ListNode* temp = current->next;
            // Reverse the current nodes next pointer
            current->next = prev;
            // Move prev to the current node
            prev = current;
            // Move to the next node
            current = temp;
        }
        return prev; // Return the new head
    }
};