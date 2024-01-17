#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Graph {
public:
	int num_verteies;
	vector<vector<int>> adj_list;

	Graph(int _num_verteies) {
		this->num_verteies = _num_verteies;
		this->adj_list.resize(_num_verteies);
	}

	void add_edge(int start, int finish) {
		adj_list[start].push_back(finish);
		adj_list[finish].push_back(start);
	}

	void print_graph() {
		for (int i = 0; i < this->num_verteies; i++) {
			cout << i << " : ";
			for (auto j : adj_list[i]) {
				cout << j << " ";
			}
			cout << "\n";
		}
	}
};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,N, M, Q;
	int u, v, w;

	
	
	cin >> T;
	for (int ct = 0; ct < T; ct++) {
		cin >> N >> M >> Q;

		vector<pair<int, int>> cost;
		

		for (int i = 0; i < M; i++) {
			cin >> u >> v >> w;
			cost[u, v] = w;
			cost[v, u] = w;
		}

		for (int i = 0; i < Q; i++) {
			cin >> u >> v;
			cout << cost[u][v] << "\n";
		}
	}



	return 0;
}

/*
2
4 4 4
0 2 20
2 3 10
1 2 30
3 0 5
0 3
2 3
1 2
0 2
5 7 5
0 4 100
1 4 20
2 0 3
2 1 17
4 2 50
2 3 40
1 3 10
4 2
1 2
2 0
4 1
0 3

*/