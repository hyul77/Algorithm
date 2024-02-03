#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T, k, n;
	

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k;
		cin >> n;
		int ans = 0;
		vector<vector<int>>A;
		for (int j = 0; j < k + 1; j++) {
			vector<int> B;
			if (j == 0) {
				for (int jj = 0; jj < n + 1; jj++) {
					B.push_back(jj + 1);
				}
				A.push_back(B);
			}
			else {
				int sum = 0;
				for (int ii = 0; ii < n + 1; ii++) {
					sum += A[j - 1][ii];
					B.push_back(sum);
				}
				A.push_back(B);
			}
		}
		cout << A[k][n - 1] << "\n";
	}
	return 0;
}