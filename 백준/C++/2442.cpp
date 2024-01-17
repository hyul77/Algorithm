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
		for (int j = i+1; j < N; j++) {
			cout << " ";
		}
		for (int j = N - i; j < N; j++) {
			cout << "*";
		}
		cout << "*";
		for (int j = N - i; j < N; j++) {
			cout << "*";
		}
		cout << "\n";
	}








	return 0;
}