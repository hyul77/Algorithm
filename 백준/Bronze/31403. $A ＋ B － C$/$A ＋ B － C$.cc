#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B, C;
	cin >> A >> B >> C;
	cout << A + B - C << "\n";

	long long X = B;
	int count = 0;

	for (;;) {
		if (X > 0) {
			X /= 10;
			count++;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < count; i++) {
		A *= 10;
	}
	cout << A + B - C << "\n";

	
	



	return 0;
}