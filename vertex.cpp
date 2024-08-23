#include<bits/stdc++.h>
using namespace std;

const int V = 5;

void init(int arr[][V]) {
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++)
            arr[i][j] = 0;
}

void addEdge(int arr[][V], int src, int dest) {
    arr[src][dest] = 1;
}

void printAdjMatrix(int arr[][V]) {
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int adjMatrix[V][V];

    init(adjMatrix);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 2, 1);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);
    addEdge(adjMatrix, 3, 1);
    addEdge(adjMatrix, 3, 2);
    addEdge(adjMatrix, 3, 5);
    addEdge(adjMatrix, 4, 1);
    addEdge(adjMatrix, 4, 3);
    addEdge(adjMatrix, 4, 5);
    addEdge(adjMatrix, 5, 3);
    addEdge(adjMatrix, 5, 4);

    printAdjMatrix(adjMatrix);

    return 0;
}
