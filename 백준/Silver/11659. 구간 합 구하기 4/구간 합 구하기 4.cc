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

    int N, M;
    cin >> N >> M;

    int x, y;
    vector<int>list;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (i == 0) {
            list.push_back(x);
        }
        else {
            list.push_back(list[i-1] + x);
        }
    }

    for (int i = 0; i < M; i++) {
        int ans = 0;
        cin >> x >> y;
        if (x != 1) {
            ans = list[y - 1] - list[x - 2];
        }
        else {
            ans = list[y - 1];
        }
        
        cout << ans << "\n";
    }
        
    return 0;
}
