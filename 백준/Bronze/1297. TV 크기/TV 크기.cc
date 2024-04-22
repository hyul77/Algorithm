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

    double D, H, W;

    cin >> D >> H >> W;

    double T = (H*H + W*W);
    D *= D;
    double ans = D / T;
    ans = sqrt(ans);

    cout << int(H * ans) << " " << int(W * ans) << "\n";

    
    return 0;
}
