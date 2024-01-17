#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long T, S;
	cin >> T;
	vector < long long> A;

	for (int i = 0; i < T; i++) {
		cin >> S;
		A.push_back(S);
	}

	long long max=1, min=1000000;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] > max) {
			max = A[i];
		}
		if (A[i] < min) {
			min = A[i];
		}
	}

	cout << max * min << "\n";
	




	return 0;
}