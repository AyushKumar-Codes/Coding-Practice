// //Traversal output

#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adj, int v, int w) {
    adj[v][w] = 1;
}

void DFS(vector<vector<int>>& adj, vector<int>& visited, int v) {
    visited[v] = 1;
    cout << v << " ";

    for (int i = 0; i < adj.size(); ++i) {
        if (adj[v][i] && !visited[i]) {
            DFS(adj, visited, i);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V, vector<int>(V, 0));
    vector<int> visited(V, 0);

    for (int i = 0; i < E; ++i) {
        int v, w;
        cin >> v >> w;
        addEdge(adj, v, w);
    }

    int startVertex;
    cin >> startVertex;

    cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
    DFS(adj, visited, startVertex);

    return 0;
}

// //Finding path
// #include<iostream>
// #include <vector>
// using namespace std;
// bool DFS(vector<int>adj[],int start,int end,vector<bool> visited){
//     visited[start]=true;
//     if(start==end){
//         return true;
//     }
//     for(int x:adj[start]){
//         if(!visited[x]){
//             if(DFS(adj,x,end,visited)){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int u,v;
//     vector<int> adj[n];
//     for(int i=0;i<m;i++){
//         cin>>u>>v;
//         adj[v].push_back(u);
//         adj[u].push_back(v);
//     }
//     int start,end;
//     cin>>start>>end;
//     vector<bool> visited(n,false);
//      if(DFS(adj, start, end, visited))
//         cout << "There is a path from " << start << " to " << end;
//     else
//         cout << "There is no path from " << start << " to " << end;
//     return 0;
// }


// BSF Traversal
#include<bits/stdc++.h>
using namespace std;

// Function to perform BFS on the graph
void BFS(vector<int> adj[], int start, int V) {
    // Create a visited array
    vector<bool> visited(V, false);

    // Create a queue for BFS
    queue<int> queue;
    visited[start] = true;
    queue.push(start);

    while(!queue.empty()) {
        // Dequeue a vertex from queue and print it
        int u = queue.front();
        cout << u << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued vertex u
        // If a adjacent has not been visited, then mark it visited and enqueue it
        for (auto v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                queue.push(v);
            }
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    // Create an adjacency list
    vector<int> adj[V];
    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // Call the BFS function for each vertex
    for(int i = 0; i < V; i++) {
        if(i == 0) {
            
            BFS(adj, i, V);
            cout << "\n";
        }
    }

    return 0;
}


