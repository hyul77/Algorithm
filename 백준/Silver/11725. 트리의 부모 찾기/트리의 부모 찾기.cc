#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <vector>

using namespace std;

//class Graph {
//public:
//	int numVertex;
//	vector<vector<pair<int, int>>> adjList;
//
//	Graph(int _numVertex) {
//		this->numVertex = _numVertex;
//		adjList.resize(_numVertex);
//	}
//
//	void addEdge(int u, int v, int weight) {
//		adjList[u].push_back(make_pair(v, weight));
//		adjList[v].push_back(make_pair(u, weight));
//	}
//};

void dfs(int cur, vector<vector<int>>& g, vector<int>& par) {
	for (int next : g[cur]) {
		if (par[next] == 0) {
			par[next] = cur;
			dfs(next, g, par);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);

	int N, x, y;
	cin >> N;

	vector<vector<int>> g(N+1);
	vector<int> par(N+1);
	for (int i = 1; i < N; i++) {
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	par[1] = -1;

	dfs(1, g, par);

	for (int i = 2; i < N+1; i++) {
		cout << par[i] << "\n";
	}



	return 0;
}