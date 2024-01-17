#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L, P,X;
	vector<int> A;
	cin >> L >> P;

	for (int i = 0; i < 5; i++) {
		cin >> X;
		A.push_back(X);
	}

	for (int i = 0; i < 5; i++) {
		cout << A[i] - L * P << " ";
	}
	cout << "\n";

	return 0;
}