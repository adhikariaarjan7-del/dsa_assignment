Documentation: Graph Traversal using BFS and DFS
Program Overview
This program implements an undirected graph using adjacency matrix and performs both BFS (Breadth First Search) and DFS (Depth First Search) traversal techniques.

Data Structures
1. Adjacency Matrix (graph[MAX][MAX])

2D array representing the graph
graph[i][j] = 1 means edge between vertex i and j
graph[i][j] = 0 means no edge

2. Visited Array (visited[MAX])

Tracks visited vertices during traversal
Value 0 means unvisited, 1 means visited

3. Queue Array (queue[MAX])

Used for BFS traversal
front and rear pointers manage the queue

4. Variable n

Stores total number of vertices


Functions
1. enqueue(int v)
Adds vertex to the queue.
Parameters:

v - vertex number to add

Sets front to 0 if queue is empty and increments rear to add vertex.
2. dequeue()
Removes and returns vertex from queue.
Returns vertex at front position and updates front pointer. Resets queue when empty.
3. BFS(int start)
Performs breadth first search traversal.
Parameters:

start - starting vertex

Steps:

Reset all vertices to unvisited
Mark start vertex as visited and enqueue it
While queue is not empty, dequeue vertex and visit all unvisited neighbors
Print vertices in order they are visited

4. DFS(int v)
Performs depth first search using recursion.
Parameters:

v - current vertex to visit

Steps:

Print and mark current vertex as visited
Recursively visit all unvisited adjacent vertices


Main Method Organization
1. Input Phase

Read number of vertices from user
Read adjacency matrix row by row

2. BFS Traversal

Call BFS function starting from vertex 0
Display traversal order

3. DFS Traversal

Reset visited array
Call DFS function starting from vertex 0
Display traversal order

Output Sample
1)<img width="379" height="247" alt="Screenshot 2026-02-09 000558" src="https://github.com/user-attachments/assets/dfdc5f1c-cfa5-4310-a2bc-1759fe081da7" />

