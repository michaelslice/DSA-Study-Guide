#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <stack>
using namespace std;

/**
 * Depth-First-Search - Iterative Approach:
 *  Is a graph traversal algorithm that explores as far as possible along each branch
 *  before backtracking. It delves deep into each branch before visiting neighbors at the same level.
 * 
 * Summary: Explores deep into one branch before backtracking (uses a stack)
 * 
 * depth = vertical before horizontal
 * 
 * How it Works:
 * 
 * 1. Uses a stack to keep track of the next node to visit.
 * 2. Starts by pushing the start node onto the stack and marking it as visited.
 * 3. Pops a node from the stack, processes it, and pushes its unvisited neighbors onto the stack.
 * 4. This process continues until the stack is empty.
 * 
 * Time Complexity
 * 
 * O(V * E), V=number of vertices, E=number of edges
 * 
 * Space Complexity
 * 
 * O(V)
 * 
 */
void DFSIterative(int startNode, const vector<vector<int>>& adjList, vector<bool>& visited) {
    stack<int> s;
    s.push(startNode);
    visited[startNode] = true;

    while(!s.empty()) {
        // Pop a node from the stack
        int node = s.top();
        s.pop();

        // Process node
        cout << node << " ";

        // Get all adjacent nodes
        for(int neighbor: adjList[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                s.push(neighbor);
            }
        }
    }
}

// Testing Depth-First-Search Iterative
int main() {

    // Number of nodes in the graph
    int numNodes = 6;

    // Create an adjacency list representation of the graph
    vector<vector<int>> adjList(numNodes);

    // Adding edges to the graph
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[1].push_back(4);
    adjList[2].push_back(4);
    adjList[3].push_back(5);
    adjList[4].push_back(5);

    // Vector to keep track of visited nodes
    vector<bool> visited(numNodes, false);

    // Perform DFS starting from node 0
    cout << "DFS starting from node 0 (Iterative): ";
    DFSIterative(0, adjList, visited);

    return 0;
}