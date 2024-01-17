#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string S;
	vector<string> novel;
	getline(cin, S);
	novel.push_back(S);

	int count = 1;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ' ') {
			count++;
		}
	}

	if (S[0] == ' ') {
		count--;
	}

	if (S[S.size()-1] == ' ') {
		count--;
	}
	cout << count << "\n";




	return 0;
}