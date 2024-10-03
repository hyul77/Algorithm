#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Graph {
public:
    int numVertex;
    vector<vector<int>> adjList;

    Graph(int _numVertex) {
        this->numVertex = _numVertex;
        this->adjList.resize(_numVertex);
    }

    void addEdge(int i, int j) {
        adjList[i].push_back(j);
    }

    void buildGraph() {
        for (int i = 0; i < numVertex; i++) {
            // 이동: i - 1
            if (i - 1 >= 0) addEdge(i, i - 1);
            // 이동: i + 1
            if (i + 1 <= 100000) addEdge(i, i + 1);
            // 순간 이동: 2 * i
            if (i * 2 <= 100000) addEdge(i, i * 2);
        }
    }

    int findMinTime(int start, int end) {
        if (start == end) return 0;

        vector<bool> visited(numVertex, false);
        vector<int> dist(numVertex, -1); // 거리 배열 초기화
        queue<int> q;

        q.push(start);
        visited[start] = true;
        dist[start] = 0; // 시작 정점의 거리는 0

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            for (int next : adjList[cur]) {
                if (!visited[next]) {
                    visited[next] = true;
                    dist[next] = dist[cur] + 1; // 현재 정점까지의 거리 + 1
                    q.push(next);

                    // 목적지에 도달한 경우
                    if (next == end) {
                        return dist[next]; // 경로 길이 반환
                    }
                }
            }
        }

        return -1; // 경로가 없으면 -1 반환
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    Graph g(100001);
    g.buildGraph(); // 그래프 구축

    cout << g.findMinTime(N, M) << "\n"; // 결과 출력

    return 0;
}
