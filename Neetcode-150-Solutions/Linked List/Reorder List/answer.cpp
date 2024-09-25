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
    void reorderList(ListNode* head) {
        // If the list is empty we cannot reorder it
        if(head->next == NULL){
            return;
        }   

        ListNode* prev = NULL; // Track the node right before the middle
        ListNode* slow = head; // Slow pointer used to find middle of list
        ListNode* fast = head; // Fast pointer used to help us find the middle of the list

        // Check if fast and fast->next are not NULL to avoid 
        while(fast != NULL && fast->next != NULL){
            prev = slow; // Used to track the node right before the middle
            slow = slow->next; // Move one step at a time
            fast = fast->next->next; // Move twice as fast as slow
        }
        // Breaks the list into two halves, the first half ends at NULL
        prev->next = NULL;

        ListNode* l1 = head; // Points to the first half of the list
        ListNode* l2 = reverse(slow); // Points to the second half of list

        merge(l1, l2);
    }
private:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = curr->next;

        // Iterate until all nodes are reversed
        while(curr != NULL){
            next = curr->next; // Save reference to the next node
            curr->next = prev; // Reverse the link so the current node points to the previous node
            prev = curr; // Move prev to current node
            curr = next; // Move curr to the next node (original next node before traversing)
        }
        return prev; // Return the new head of the reversed linked list
    }

    void merge(ListNode* l1, ListNode* l2){
        while(l1 != NULL){
            ListNode* p1 = l1->next; // Store the next node of l1 to use later for alternating
            ListNode* p2 = l2->next; // Store the next node of l2 to use later for alternating
        
            l1->next = l2; // Link the current node of l1 to the current node of l2
            if(p1 == NULL){ // If l1 has no more nodes stop
                break;
            }
            l2->next = p1; // Link the current node l2 to the current node of l1

            l1 = p1;
            l2 = p2;
        }
    }
};