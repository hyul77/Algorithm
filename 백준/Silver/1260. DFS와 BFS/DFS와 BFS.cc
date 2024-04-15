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


void BFS(vector<vector<int>>& graph, vector<bool>& Bvisited, int start, vector<int>& B) {
    queue<int> q;
    q.push(start);
    Bvisited[start] = true;
    B.push_back(start);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int next : graph[cur]) {
            if (!Bvisited[next]) {
                Bvisited[next] = true;
                B.push_back(next);
                q.push(next);
            }
        }
    }
}

void DFS(vector<vector<int>>& graph, vector<bool>& Dvisited, int start, vector<int>& D) {
    Dvisited[start] = true;
    D.push_back(start);

    for (int next : graph[start]) {
        if (!Dvisited[next]) {
            DFS(graph, Dvisited, next, D);
        }
    }
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, S, V;

    
    cin >> N >> S >> V;

    int X, Y;
    vector<vector<int>> graph(N + 1);
    vector<bool>Dvisited(N + 1, false);
    vector<bool>Bvisited(N + 1, false);

    for (int i = 0; i < S; i++) {
        cin >> X >> Y;
        graph[X].push_back(Y);
        graph[Y].push_back(X);
    }
    for (int i = 0; i < N+1; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    vector<int> B;
    vector<int> D;


    DFS(graph, Dvisited, V, D);
    BFS(graph, Bvisited, V, B);


    for (int i = 0; i < D.size(); i++) {
        if (i == D.size() - 1) {
            cout << D[i] << "\n";
        }
        else {
            cout << D[i] << " ";
        }
    }

    for (int i = 0; i < B.size(); i++) {
        if (i == B.size() - 1) {
            cout << B[i] << "\n";
        }
        else {
            cout << B[i] << " ";
        }
    }


    


    return 0;
}
