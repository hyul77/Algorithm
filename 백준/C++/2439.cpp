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
	for (int i = 1; i < N+1; i++) {
		for (int j = N; j > 0; j--) {
			if (j > i) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << "\n";
	}


	return 0;
}