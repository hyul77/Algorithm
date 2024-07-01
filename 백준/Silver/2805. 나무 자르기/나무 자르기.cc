#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    long long N, M;
    cin >> N >> M;
    vector<int> list(N);

    long long right = 0;
    long long left = 0;
    long long ans = 0;  // Initialize ans to 0 instead of -1

    for (int i = 0; i < N; i++) {
        cin >> list[i];
        if (right < list[i]) right = list[i];
    }

    while (left <= right) {
        long long mid = (right + left) / 2;
        long long count = 0;
        
        for (int i = 0; i < N; i++) {
            if (list[i] > mid) count += list[i] - mid;
        }

        if (count >= M) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}