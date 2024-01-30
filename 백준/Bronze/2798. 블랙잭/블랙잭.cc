#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, x;
	vector<int>A;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> x;
		A.push_back(x);
	}
	int maxs = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = A[i] + A[j] + A[k];
				if (sum <= M) {
					maxs = max(maxs, sum);
				}
			}
		}
	}
	cout << maxs << "\n";


	return 0;
}