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

int dx[] = { 0, 0, 1, -1, 0, 0 };
int dy[] = { 1, -1, 0, 0, 0, 0 };
int dz[] = { 0, 0, 0, 0, 1, -1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int M, N, H;
    cin >> M >> N >> H;

    queue<tuple<int, int, int>> q;
    vector<vector<vector<int>>> list(H, vector<vector<int>>(N, vector<int>(M)));
    for (int h = 0; h < H; h++) {
        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                cin >> list[h][n][m];
                if (list[h][n][m] == 1) {
                    q.push(make_tuple(n, m, h));
                }
            }
        }
    }
    int days = -1;

    while (!q.empty()) {
        int size = q.size();
        ++days;

        for (int k = 0; k < size; ++k) {
            int x, y, z;
            tie(x, y, z) = q.front();
            q.pop();

            for (int dir = 0; dir < 6; ++dir) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                int nz = z + dz[dir];

                if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H) continue;

                if (list[nz][nx][ny] == 0) {
                    list[nz][nx][ny] = 1;
                    q.push(make_tuple(nx, ny, nz));
                }
            }
        }
    }

    for (int h = 0; h < H; ++h) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (list[h][i][j] == 0) {
                    cout << -1 << "\n";
                    return 0;
                }
            }
        }
    }

    cout << days << "\n";

    return 0;
}
