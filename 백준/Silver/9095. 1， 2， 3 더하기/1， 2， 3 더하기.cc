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


int count_all(int X) {
    vector<int> dp(X + 1, 0);

    dp[0] = 1;
    for (int i = 1; i < X + 1; i++) {
        if (i >= 1) {
            dp[i] += dp[i - 1];
        }
        if (i >= 2) {
            dp[i] += dp[i - 2];
        }
        if (i >= 3) {
            dp[i] += dp[i - 3];
        }
    }
    int ans = dp[X];

    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, X;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> X;
        int ans = count_all(X);
        cout << ans << "\n";
    }

    
    return 0;
}
