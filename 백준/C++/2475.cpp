#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> A;

	int B;
	for (int i = 0; i < 5; i++) {
		cin >> B;
		A.push_back(B*B);
	}

	B = 0;
	for (int i = 0; i < 5; i++) {
		B += A[i];
	}

	A.push_back(B % 10);
	cout << A[5] << "\n";



	return 0;
}