#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string S, all = "";
	int i;
	for (;;) {
		getline(cin, S);
		if (cin.eof() == true) {
			break;
		}
		all.append(S);
		all.append("\n");

	}
	cout << all;



	return 0;
}