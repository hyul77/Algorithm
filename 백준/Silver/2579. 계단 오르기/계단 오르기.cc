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


    int T, x;
    cin >> T;
    vector<int> score(T+1);
    for (int i = 1; i < T+1; i++) cin >> score[i];
    vector<int> dp(T + 1);

    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    dp[3] = max(score[1] + score[3], score[2] + score[3]);

    for(int i = 4; i < T + 1; i++) {
        dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
    }

    cout << dp[T] << "\n";


    return 0;
}
