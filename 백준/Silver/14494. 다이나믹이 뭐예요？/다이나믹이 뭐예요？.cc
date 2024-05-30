#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

    dp[1][1] = 1;
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + dp[i][j - 1] + dp[i - 1][j]) % 1000000007;
        }
    }

    cout << dp[n][m] << "\n";


    return 0;
}