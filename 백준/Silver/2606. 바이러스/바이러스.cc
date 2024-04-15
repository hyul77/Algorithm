#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;


void BFS(vector<vector<int>>& graph, vector<bool>& visited, int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, S;

    
    cin >> N >> S;

    int X, Y;
    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < S; ++i) {
        cin >> X >> Y;
        graph[X].push_back(Y);
        graph[Y].push_back(X);
    }
    vector<bool> visited(N + 1, false);

    BFS(graph, visited, 1);
    int cnt = count(visited.begin() + 2, visited.end(), true);

    cout << cnt << "\n";
    


    return 0;
}
