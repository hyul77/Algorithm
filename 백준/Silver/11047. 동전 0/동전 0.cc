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

    int N, K;
    cin >> N >> K;

    int x, y;
    vector<int>list;
    for (int i = 0; i < N; i++) {
        cin >> x;
        list.push_back(x);
    }

    int count = 0;
    for (int i = list.size() - 1; i >= 0; i--) {
        if (K >= list[i]) {
            int a = K / list[i];
            K %= list[i];
            count += a;
        }
        if (K == 0) break;
    }

    cout << count << "\n";
}


