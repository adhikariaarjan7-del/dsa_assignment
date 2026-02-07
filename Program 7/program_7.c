#include <stdio.h>
#include <limits.h>

#define MAX 10

int mindistance(int dist[], int visited[], int n) {
    int min = INT_MAX;
    int minindex = -1;
    int i;
    
    for (i = 0; i < n; i++) {
        if (visited[i] == 0 && dist[i] < min) {
            min = dist[i];
            minindex = i;
        }
    }
    return minindex;
}

void dijkstra(int graph[MAX][MAX], int n, int source) {
    int dist[MAX];
    int visited[MAX];
    int i, j, count;
    
    for (i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    
    dist[source] = 0;
    
    for (count = 0; count < n - 1; count++) {
        int u = mindistance(dist, visited, n);
        visited[u] = 1;
        
        for (j = 0; j < n; j++) {
            if (visited[j] == 0 && graph[u][j] != 0 && dist[u] != INT_MAX) {
                if (dist[u] + graph[u][j] < dist[j]) {
                    dist[j] = dist[u] + graph[u][j];
                }
            }
        }
    }
    
    printf("\nShortest distances from source %d:\n", source);
    printf("Node\tDistance\n");
    for (i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) {
            printf("%d\tINF\n", i);
        } else {
            printf("%d\t%d\n", i, dist[i]);
        }
    }
}

int main() {
    int n, i, j, source;
    int graph[MAX][MAX];
    
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    printf("\nEnter adjacency matrix (0 for no edge):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    
    printf("\nEnter source node: ");
    scanf("%d", &source);
    
    dijkstra(graph, n, source);
    
    return 0;
}