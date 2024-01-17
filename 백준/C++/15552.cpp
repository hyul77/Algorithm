#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> alp;
	for (int i = 0; i < 26; i++) {
		alp.push_back(-1);
	}

	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		if (alp[S[i] - 97] == -1) {
			alp[S[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}
	cout << "\n";
	
	


	return 0;
}

