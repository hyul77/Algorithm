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




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, count = 0;
    cin >> X;

    vector<int> dp(X + 1, 0);
    for (int i = 2; i<=X; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    cout << dp[X] << "\n";

    return 0;
}
