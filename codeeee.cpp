// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Number of nodes
int N;
 
// Structure of a Node
struct Node {
    int node;
    int edgeLabel;
};
 
// Adjacency List to
// represent the Tree
vector<Node> adj[100005];
 
// Stores the frequencies
// of every edge
vector<int> freq;
 
// Function to perform DFS
int dfs(int u = 1, int p = 1)
{
    // Add the current node to
    // size of subtree rooted at u
    int sz = 1;
 
    // Iterate over its children
    for (auto a : adj[u]) {
 
        // Check if child is not parent
        if (a.node != p) {
 
            // Get the subtree size
            // for the child
            int val = dfs(a.node, u);
 
            // Set the frequency
            // of the current edge
            freq[a.edgeLabel]
                = val * (N - val);
 
            // Add the subtree size
            // to itself
            sz += val;
        }
    }
 
    // Return the subtree size
    return sz;
}
 
// Function to add edge between nodes
void addEdge(int u, int v, int label)
{
    adj[u].push_back({ v, label });
    adj[v].push_back({ u, label });
}
 
// Function to print the frequencies
// of each edge in all possible paths
void printFrequencies()
{
 
    // Stores the frequency
    // of all the edges
    freq = vector<int>(N);
 
    // Perform DFS
    dfs();
 
    for (int i = 1; i < N; i++) {
        cout << freq[i] << " ";
    }
}
 
// Driver Code
int main()
{
    N = 5;
    addEdge(1, 2, 1);
    addEdge(2, 3, 2);
    addEdge(3, 4, 3);
    addEdge(4,5,4);
 
    printFrequencies();
 
    return 0;
}