#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
#include <stack>
using namespace std;

/**
 * Depth-First-Search - Recursive Approach:
 *  A graph traversal algorithm that explores as far as possible along each branch before backtracking
 * 
 * Summary: Explores deep into the graph using recursion
 * 
 * How it Works:
 * 
 * 1. Uses recursion to keep track of the next node to visit
 * 
 * 2. Starts by visiting the start node and marking it as visited
 * 
 * 3. Recursively visists all its unvisited neighbors
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
void DFSRecursive(int node, const vector<vector<int>>& adjList, vector<bool>& visited) {
    // Process node
    cout << node << " ";
    visited[node] = true;

    // Get all adjacent nodes
    for(int neighbor: adjList[node]) {
        if(!visited[neighbor]) {
            DFSRecursive(neighbor, adjList, visited);
        }
    }
}

// Testing Depth-First-Search Recursive
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
    cout << "DFS starting from node 0 (Recursive): ";
    DFSRecursive(0, adjList, visited);

    return 0;
}