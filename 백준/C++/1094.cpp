#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X;
	int A = 64;
	cin >> X;

	int count = 0;
	for (;;) {
		if (X == 0) {
			break;
		}
		
		if (X < A) {
			A /= 2;
		}
		else {
			count++;
			X -= A;
		}
	}

	cout << count << "\n";



	return 0;
}

