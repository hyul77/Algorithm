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



int search(int start, long long x, vector<long long>& B) {
    int left = start + 1;
    int right = B.size() - 1;
    int mid = (left + right) / 2;
    for (;;) {
        if (left > right) break;

        mid = (left + right) / 2;

        if (x < B[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return right;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,x;
    cin >> N;

    vector<long long> A(N);
    vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    vector<int> ans(N);
    for (int i = 0; i < N; i++) {
        ans[i] = search(i, A[i], B) - i;
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";



    return 0;
}