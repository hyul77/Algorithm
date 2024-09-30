#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int dx[8] = { 0, 0, 1,1,1,-1,-1,-1 };
int dy[8] = { 1,-1,1,-1,0,1,-1,0 };

void dfs(int x, int y, vector<vector<int>>& map, vector<vector<bool>>& visited, int w, int h) {
	visited[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < h && ny >= 0 && ny < w && map[nx][ny] == 1 && !visited[nx][ny]) {
			dfs(nx, ny, map, visited, w, h);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);

	int w,h, x, y;

	for (;;) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		vector<vector<int>> map(h, vector<int>(w));
		vector<vector<bool>> visited(h, vector<bool>(w));

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		int count = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && !visited[i][j]) {
					dfs(i, j, map, visited, w, h);
					count++;
				}
				
			}
		}

		cout << count << "\n";

	}
	
	


	return 0;
}