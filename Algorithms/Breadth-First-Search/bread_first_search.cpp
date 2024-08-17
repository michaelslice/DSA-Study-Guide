#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>
#include <queue>
using namespace std;

/**
 * Breadth-First-Search: Is a graph traversal algorithm that explores all the vertices of a graph 
 * level by level. It starts from a given source node and explores all its neighbors before moving 
 * on to the neighbors of those neighbors, and so on.
 * 
 * Summary: Explore the graph level by level(using a queue)
 * 
 * breadth = broad/wide(will horizontally traverse the tree or graph)
 * 
 * How it Works:
 * 
 * 1. BFS uses a queue data structure to keep track of the next node to visist
 * 
 * 2. It starts by visiting the source node, making it as visited, and enqueing its neighbors
 * 
 * 3. The algorithm dequeues a node, visits it, and enqueues all its unvisited neighbors
 * 
 * 4. This process continues until the queue is empty
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
void BFS(int startNode, const vector<vector<int>> adjList, vector<bool>& visited) {
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while(!q.empty()) {
        // Deque a node from the queue 
        int node  = q.front();
        q.pop();

        // Process node;
        cout << node << " ";

        // Get all adjacent nodes
        for(int neighbor : adjList[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Testing Breadth-First-Search
int main() {

    // Number of nodes in graph
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

    // Perform BFS starting from node 0
    cout << "BFS starting from node 0: ";
    BFS(0, adjList, visited);

    return 0;
}