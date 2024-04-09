#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;

// DFS 함수
void dfs(int x, int y, vector<vector<bool>>& visited, vector<vector<bool>>& A, int N, int M) {
    visited[x][y] = true;
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && A[nx][ny] == true) {
            dfs(nx, ny, visited, A, N, M);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, M, N, K; // M : 가로 길이 N : 세로길이 K : 배추 수
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> M >> N >> K;

        vector<vector<bool>> A(N, vector<bool>(M, false));
        vector<vector<bool>> visited(N, vector<bool>(M, false));

        int x, y;
        for (int j = 0; j < K; j++) {
            cin >> x >> y;
            A[y][x] = true; 
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (A[i][j] && !visited[i][j]) {
                    dfs(i, j, visited, A, N, M);
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
}
