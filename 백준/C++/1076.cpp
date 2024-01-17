#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>ans;
	vector<string>A;
	string S;

	for (int i = 0; i < 3; i++) {
		cin >> S;
		A.push_back(S);
	}

	for (int i = 0; i < 3; i++) {
		if (A[i] == "black") {
			ans.push_back(0);
		}
		else if (A[i] == "brown") {
			ans.push_back(1);
		}
		else if (A[i] == "red") {
			ans.push_back(2);
		}
		else if (A[i] == "orange") {
			ans.push_back(3);
		}
		else if (A[i] == "yellow") {
			ans.push_back(4);
		}
		else if (A[i] == "green") {
			ans.push_back(5);
		}
		else if (A[i] == "blue") {
			ans.push_back(6);
		}
		else if (A[i] == "violet") {
			ans.push_back(7);
		}
		else if (A[i] == "grey") {
			ans.push_back(8);
		}
		else {
			ans.push_back(9);
		}
	}

	long long ekq;
	ekq = ans[0] * 10 + ans[1];
	for (int i = 0; i < ans[2]; i++) {
		ekq *= 10;
	}

	cout << ekq << "\n";


	return 0;
}