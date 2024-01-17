#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N, M;

	cin >> N >> M;
	if (N > M) {
		cout << N - M<<"\n";
	}
	else {
		cout<<M - N << "\n";
	}

	return 0;
}