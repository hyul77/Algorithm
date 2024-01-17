#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long T, N, M;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;

		long long ans = 1;

		vector<long long> A;

		for (int j = 0; j < N; j++) {
			ans *= M - j;

			if (ans % (N - j) != 0) {
				A.push_back(N - j);
			}
			else {
				ans /= N - j;
			}
			
		}
		for (int j = 0; j < A.size(); j++) {
			ans /= A[j];
		}



		cout << ans << "\n";
	}



	return 0;
}