#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X;
	vector<int> A;
	vector<int> B;

	A.push_back(1);
	A.push_back(1);
	A.push_back(2);
	A.push_back(2);
	A.push_back(2);
	A.push_back(8);

	for (int i = 0; i < 6; i++) {
		cin >> X;
		B.push_back(A[i] - X);
	}
	for (int i = 0; i < 6; i++) {
		cout << B[i] << " ";
	}
	cout << "\n";


	

	return 0;
}