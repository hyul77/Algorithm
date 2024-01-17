#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> A;
	vector<vector<int>> B;
	vector<vector<int>> C;

	int N, M, X;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> X;
			A[i].push_back(X);
		}
		A.push_back(A[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> X;
			B[i].push_back(X);
		}
		B.push_back(B[i]);
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			C[i].push_back(A[i][j] + B[i][j]);
		}
		C.push_back(C[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << C[i][j] << " ";
		}
		cout << "\n";
	}
}