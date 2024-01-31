#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,x;
	string S;
	queue<int> A;
	cin >> T;
	int last = 0;
	for (int i = 0; i < T; i++) {
		cin >> S;
		if (S == "push") {
			cin >> x;
			A.push(x);
			last = x;
		}
		else if (S == "pop") {
			if (A.size() == 0) cout << -1 << "\n";
			else {
				cout << A.front() << "\n";
				A.pop();
			}
		}
		else if (S == "size") cout << A.size() << "\n";
		else if (S == "empty") {
			if (A.size() == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (S == "front") {
			if (A.size() == 0) cout << -1 << "\n";
			else cout << A.front() << "\n";
		}
		else {
			if (A.size() == 0) cout << -1 << "\n";
			else cout << last << "\n";
		}
			

	}



	return 0;
}