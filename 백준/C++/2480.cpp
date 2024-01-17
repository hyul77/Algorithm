#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, Y, Z;
	cin >> X >> Y >> Z;

	int ans = 0;
	if (X == Y && X==Z) {
		ans = X * 1000 + 10000;
	}
	else if (X == Y) {
		ans = X * 100 + 1000;
	}
	else if (Z == Y) {
		ans = Y * 100 + 1000;
	}
	else if (X == Z) {
		ans = X * 100 + 1000;
	}
	else {
		if (X > Y) {
			if (X > Z) {
				ans = X * 100;
			}
			else {
				ans = Z * 100;
			}
		}
		else {
			if (Y > Z) {
				ans = Y * 100;
			}
			else {
				ans = Z * 100;
			}
		}
	}

	cout << ans << "\n";


	return 0;
}