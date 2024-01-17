#include <iostream>
#include <string>


using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int h, w, n;
		cin >> h >> w >> n;

		int floor = n % h == 0 ? h : n % h;
		int room = (n - 1) / h + 1;

		cout << floor * 100 + room << "\n";
	}

	return 0;
}