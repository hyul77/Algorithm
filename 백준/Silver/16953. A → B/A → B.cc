#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;

	cin >> A >> B;
	long long cur = B;
	long long count = 1;

	for (;;) {
		if (cur == A) break;
		else if (cur < A) {
			count = -1;
			break;
		}

		if (cur % 10 == 1) {
			cur /= 10;
			count++;
		}

		else if (cur % 2 == 0) {
			cur /= 2;
			count++;
		}
		else {
			count = -1;
			break;
		}
	}

	cout << count << "\n";


	return 0;
}