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
	if (N == 4 || N < 3) {
		cout << -1 << "\n";
	}
	else {
		if (N % 5 == 0) {
			cout << N / 5 << "\n";
		}
		else if (N % 5 == 4) {
			cout << (N / 5) + 2 << "\n";
		}
		else if (N % 5 == 3) {
			cout << (N / 5) + 1 << "\n";
		}
		else if (N % 5 == 2) {
			cout << (N / 5) + 2 << "\n";
		}
		else {
			cout << (N / 5) + 1 << "\n";
		}
		
	}

	


	return 0;
}