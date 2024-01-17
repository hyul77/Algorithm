#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long X, Y;
	for (;;) {
		cin >> X >> Y;
		if (X == 0 && Y == 0) {
			break;
		}

		if (X > Y) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	
	



	return 0;
}