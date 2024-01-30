#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int T, x;
	string S;
	vector<int>A;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> S;
		if (S == "push") {
			cin >> x;
			A.push_back(x);
		}
		else if (S == "pop") {
			if (A.size() == 0) cout << -1 << "\n";
			else {
				cout << A.back() << "\n";
				A.pop_back();
				
			}
		}
		else if (S == "size") cout << A.size() << "\n";

		else if (S == "empty") {
			if (A.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else {
			if (A.size() == 0) cout << -1 << "\n";
			else cout << A.back() << "\n";
		}
	}


	return 0;
}