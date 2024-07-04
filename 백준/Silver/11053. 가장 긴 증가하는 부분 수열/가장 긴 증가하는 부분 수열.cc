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
       
    int N;
    cin >> N;
    vector<int> list(N);

    for (int i = 0; i < N; i++) {
        cin >> list[i];
    }

    vector<int> dp(N, 1);

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (list[j] < list[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = *max_element(dp.begin(), dp.end());
    cout << ans << "\n";
    

    return 0;
}