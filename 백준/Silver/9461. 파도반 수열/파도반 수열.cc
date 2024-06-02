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
       

    int T, X;
    cin >> T;

    

    for (int i = 0; i < T; i++) {
        cin >> X;
        if (X == 1 || X == 2 || X == 3) cout << 1 << "\n";
        else if (X == 4) cout << 2 << "\n";
        else {
            vector<long long>dp(X + 1, 0);
            dp[1] = 1;
            dp[2] = 1;
            dp[3] = 1;
            dp[4] = 2;

            for (int j = 5; j <= X; j++) {
                dp[j] = dp[j - 1] + dp[j - 5];
            }
            cout << dp[X] << "\n";
        }
        
    }
   


    return 0;
}