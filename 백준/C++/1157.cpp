#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>ans;
	for (int i = 0; i < 26; i++) {
		ans.push_back(0);
	}

	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] > 90) {
			S[i] -= 32;
		}
	}

	for (int i = 0; i < S.size(); i++) {
		ans[(int)S[i] - 65]++;
	}

	int max = 0, max_i=0, max_i2=0;
	for (int i = 0; i < 26; i++) {
		if (max < ans[i]) {
			max = ans[i];
			max_i = i;
		}
		else if (max == ans[i]) {
			max_i2 = i;
		}
	}
	if (max_i2 != 0 && ans[max_i] == ans[max_i2]) {
		cout << "?\n";
	}
	else {
		char ans1 = max_i + 65;
		cout << ans1 << "\n";
	}


	




	return 0;
}