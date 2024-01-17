#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> Junior;
	vector<string> Senior;

	string S;
	int X, Y;

	for (;;) {
		cin >> S >> X >> Y;
		if (S == "#" && X == 0 && Y == 0) {
			break;
		}

		if (X > 17 || Y >= 80) {
			cout << S << " Senior\n";
		}
		else {
			cout << S << " Junior\n";
		}
	}
	




	return 0;
}