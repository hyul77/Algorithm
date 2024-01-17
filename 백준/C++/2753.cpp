#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N % 4 == 0) {
		if (N % 400 == 0 || N % 100 != 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	else {
		cout << 0;
	}

	return 0;
}