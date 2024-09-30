/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Map to store the mapping of the nodes
        // in the original list and the corresponding
        // node in the new list
        // Key: Pointer to original node
        // Value: Pointer to copied node
        unordered_map<Node*, Node*> nodes;
        // Temporary pointer to head of list
        Node* h = head;

        // Create a deep copy of all the nodes
        while(h){
            nodes[h] = new Node(h->val);
            // Move h to next node in the list
            h = h->next;
        }
        // Reset h
        h = head;
        // Iterate through the list
        while(h){
            // Get the new node corresponding to the original node h from the node map
            Node* newNode = nodes[h];
            // Update the next pointer of the new node to the new node corresponding to h->next
            newNode->next = nodes[h->next];
            // Update the random pointer of new node to the new node corresponding to h->random
            newNode->random = nodes[h->random];
            // Move h to next node in the list
            h = h->next;
        }
        // Return head of copied list   
        return nodes[head];
    }
};