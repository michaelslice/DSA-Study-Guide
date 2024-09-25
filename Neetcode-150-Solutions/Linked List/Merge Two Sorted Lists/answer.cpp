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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // If either list is empty return NULL
    if(list1 == NULL && list2 == NULL){
        return NULL;
    }
    // If list1 is empty return list2
    if(list1 == NULL){
        return list2;
    }
    // If list2 is empty return list1
    if(list2 == NULL){
        return list1;
    }
    // Create a dummy list for the final merged list
    ListNode* dummy = new ListNode();
    // Current tracks the last node in the list
    ListNode *current = dummy;

    // As long as theres are nodes in the list iterate
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
            // Add the element to the merged list
            current->next = list1;
            // Move to the next node
            list1 = list1->next;
        } else {
            // Add the element to the merged list
            current->next = list2;
            // Move to the next node
            list2 = list2->next;
        }
        // Move to the newly added node
        current = current->next;
    }
    // If there are remaining nodes, append the remaining nodes
    if(list1 == NULL){
        current->next = list2;
    } else {
        current->next = list1;
    }
    // Return the list starting at the next pointer, because the dummy node was a placeholder
    return dummy->next;
    }
};