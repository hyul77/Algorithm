#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>


using namespace std;

void dfs(int v, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[v] = true;
    for (int i = 0; i < graph[v].size(); i++) {
        int next = graph[v][i];
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    
    int N, M;
    cin >> N >> M;

    vector<vector<int>>graph(N + 1);
    vector<bool> isvisited(N + 1, false);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int connect = 0;

    for (int i = 1; i <= N; i++) {
        if (!isvisited[i]) {
            dfs(i, graph, isvisited);
            connect++;
        }
    }

    cout << connect << "\n";


    return 0;
}