Documentation: Dijkstra's Shortest Path Algorithm
Program Overview
This program implements Dijkstra's algorithm to find the shortest path from a source node to all other nodes in a weighted graph represented using an adjacency matrix.

Data Structures
1. Adjacency Matrix (graph[MAX][MAX])

2D integer array representing the weighted graph
graph[i][j] contains the weight of edge from node i to node j
Value 0 indicates no direct edge between nodes
Maximum size is 10×10 nodes

2. Distance Array (dist[MAX])

Stores the shortest distance from source node to each node
Initially all values are set to INT_MAX (infinity) except source which is 0

3. Visited Array (visited[MAX])

Tracks which nodes have been processed
Value 0 means unvisited, 1 means visited
Initially all values are 0


Functions
1. mindistance(int dist[], int visited[], int n)
Finds the unvisited node with minimum distance from source.
Parameters:

dist[] - array of current shortest distances
visited[] - array tracking visited nodes
n - total number of nodes

Returns the index of unvisited node with minimum distance.
2. dijkstra(int graph[MAX][MAX], int n, int source)
Implements Dijkstra's algorithm to compute shortest paths.
Parameters:

graph[MAX][MAX] - adjacency matrix of the graph
n - number of nodes
source - starting node

Steps:

Initialize all distances to infinity and mark nodes unvisited
Set source distance to 0
For each iteration, find unvisited node with minimum distance
Mark that node as visited
Update distances of its unvisited neighbors if shorter path found
Print shortest distances to all nodes


Main Method Organization
1. Variable Declaration

Declare variables for number of nodes, graph matrix, and source node

2. Input Phase

Read number of nodes from user
Read adjacency matrix row by row
Read source node

3. Processing Phase

Call dijkstra() function with graph, number of nodes, and source

4. Program Termination

Program ends after displaying results


Output Sample 
1.<img width="275" height="234" alt="image" src="https://github.com/user-attachments/assets/81667eb3-8efe-4e82-8373-57a35626849f" />

