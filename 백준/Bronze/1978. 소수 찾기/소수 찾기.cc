#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


int main() {
	int N, x;

	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 1) continue;
		else if (x == 2) count += 1;

		for (int j = 2; j < x; j++) {
			if (x % j == 0) {
				break;
			}
			if (j == x - 1) {
				count += 1;
			}

		}
		
	}
	cout << count << "\n";


	return 0;
}
