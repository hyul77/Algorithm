#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>
#include <unordered_map>


using namespace std;


int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       

    int n, m, x;
    cin >> n >> m;

    vector<vector<int>> map(n, vector<int>(m));
    vector<vector<int>> distance(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    int target_x, target_y;


    vector<int> tmp(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                target_x = i;
                target_y = j;
            }
        }
    }

    q.push({ target_x, target_y });
    distance[target_x][target_y] = 0;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 1 && distance[nx][ny] == -1) {
                distance[nx][ny] = distance[x][y] + 1;
                q.push({ nx, ny });
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (map[i][j] == 0) {
                cout << 0 << " ";
            }
            else {
                cout << distance[i][j] << " ";
            }
        }
        cout << "\n";
    }


    return 0;
}