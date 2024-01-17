#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	string S;
	cin >> N >> M;

	vector<int>A;
	vector<vector<int>>B;

	for (int i = 0; i < N; i++) {
		B.push_back(A);
		for (int j = 0; j < M; j++) {
			B[i].push_back(0);
		}
	}


	for (int i = 0; i < N; i++) {
		cin >> S;
		for (int j = 0; j < M; j++) {
			if (S[j] == 'B') {
				B[i][j] = 1;

			}
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << B[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}