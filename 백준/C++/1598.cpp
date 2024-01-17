#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long X, Y;

	cin >> X >> Y;

	vector<long long>A;
	A.push_back(X / 4);
	A.push_back(X % 4);
	A.push_back(Y / 4);
	A.push_back(Y % 4);

	if (X % 4 != 0) {
		A[0] += 1;
	}
	else {
		A[1] += 4;
	}

	if (Y % 4 != 0) {
		A[2] += 1;
	}
	else {
		A[3] += 4;
	}

	long long ans =0;
	if (A[0] > A[2]) {
		ans += A[0] - A[2];
	}
	else {
		ans += A[2] - A[0];
	}

	if (A[1] > A[3]) {
		ans += A[1] - A[3];
	}
	else {
		ans += A[3] - A[1];
	}

	cout << ans << "\n";

	return 0;
}