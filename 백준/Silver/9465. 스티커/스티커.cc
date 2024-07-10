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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, N;
    cin >> T;
    for (int te = 0; te < T; te++) {
        cin >> N;
        vector<vector<int>> list(2, vector<int>(N));

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                cin >> list[i][j];
            }
        }

        if (N == 1) {
            cout << max(list[0][0], list[1][0]) << "\n";
            continue;
        }

        vector<vector<int>>dp(2, vector<int>(N, 0));
        dp[0][0] = list[0][0];
        dp[1][0] = list[1][0];

        dp[0][1] = dp[1][0] + list[0][1];
        dp[1][1] = dp[0][0] + list[1][1];

        for (int i = 2; i < N; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + list[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + list[1][i];
        }

        cout << max(dp[0][N - 1], dp[1][N - 1]) << "\n";


        
    }

    return 0;
}