#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> A;
	A.push_back(0);
	A.push_back(1);
	A.push_back(0);
	A.push_back(0);

	int T,X,Y;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> X >> Y;
		int S;
		S = A[X];
		A[X] = A[Y];
		A[Y] = S;
	}

	int ans = 0;
	for (int i = 0; i < 4; i++) {
		if (A[i] == 1) {
			ans = i;
		}
	}

	cout << ans << "\n";

	return 0;
}