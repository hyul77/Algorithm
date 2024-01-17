#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> A;
	vector<vector<string>> B;
	string S;
	int T;
	cin >> T;
	for (int i = 0; i < 51; i++) {
		B.push_back(A);
	}

	for (int i = 0; i < T; i++) {
		cin >> S;
		B[S.size()].push_back(S);
	}
	

	for (int i = 1; i < 51; i++) {
		for (int j = 0; j < B[i].size(); j++) {
			cout << B[i][j] << "\n";
		}
	}

	return 0;
}

