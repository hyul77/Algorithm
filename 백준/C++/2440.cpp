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
	for (int i = 0; i < N; i++) {
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}