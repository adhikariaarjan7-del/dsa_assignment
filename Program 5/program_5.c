#include <stdio.h>
#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int n;

int queue[MAX], front = -1, rear = -1;

void enqueue(int v) {
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    int v = queue[front++];
    if (front > rear) front = rear = -1;
    return v;
}

void BFS(int start) {
    int i;
    for (i = 0; i < n; i++) visited[i] = 0;
    
    printf("BFS: ");
    visited[start] = 1;
    printf("%d ", start);
    enqueue(start);
    
    while (front != -1) {
        int v = dequeue();
        for (i = 0; i < n; i++) {
            if (graph[v][i] && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;
    for (int i = 0; i < n; i++)
        if (graph[v][i] && !visited[i]) DFS(i);
}

int main() {
    int i, j;
    
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    
    BFS(0);
    
    for (i = 0; i < n; i++) visited[i] = 0;
    printf("DFS: ");
    DFS(0);
    printf("\n");
    
    return 0;
}
