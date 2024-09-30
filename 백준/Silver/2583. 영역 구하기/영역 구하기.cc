#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int dx[4] = { 0,0, 1,-1 };
int dy[4] = { -1,1,0,0 };

int dfs(int x, int y, vector<vector<int>>& map, vector<vector<bool>>& visited, int M, int N) {
	visited[x][y] = true;
	int size = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < N && ny >= 0 && ny < M && map[nx][ny] == 0 && !visited[nx][ny]) {
			size += dfs(nx, ny, map, visited, M, N);
		}
	}

	return size;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int M, N, K;
	cin >> N >> M>> K;

	vector<vector<int>> map(N, vector<int>(M, 0));
	vector<vector<bool>> visited(N, vector<bool>(M, false));
	vector<int>size_list;

	int lx, ly, rx, ry;
	for (int i = 0; i < K; i++) {
		cin >> lx >> ly >> rx >> ry;

		for (int j = ly; j < ry; j++) {
			for (int k = lx; k < rx; k++) {
				map[j][k] = 1;
			}
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0 && !visited[i][j]) {
				int size = dfs(i, j, map, visited, M, N);
				size_list.push_back(size);
			}
		}
	}
	sort(size_list.begin(), size_list.end());
	cout << size_list.size() << "\n";

	for (int i = 0; i < size_list.size(); i++) {
		cout << size_list[i] << " ";
	}
	cout << "\n";

	return 0;
}