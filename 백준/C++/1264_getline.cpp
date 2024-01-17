#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	for (;;) {
		string S;
		vector<string> novel;
		getline(cin, S);
		novel.push_back(S);

		if (novel[0] == "#") {
			break;
		}

		int count = 0;

		for (int i = 0; i < novel[0].size(); i++) {
			if (novel[0][i] == 'a' || novel[0][i] == 'A'
				|| novel[0][i] == 'e' || novel[0][i] == 'E'
				|| novel[0][i] == 'i' || novel[0][i] == 'I'
				|| novel[0][i] == 'o' || novel[0][i] == 'O'
				|| novel[0][i] == 'u' || novel[0][i] == 'U') {
				count++;
			}
		}
		cout << count << "\n";
	}





	return 0;
}