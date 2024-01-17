#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	for (;;) {
		cin >> S;
		if (S == "0") {
			break;
		}

		int count = 0;
		count += S.size() + 1;
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == '0') {
				count += 4;
			}
			else if (S[i] == '1') {
				count += 2;
			}
			else {
				count += 3;
			}
		}

		cout << count << "\n";
	}




	return 0;
}