#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <deque>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	for (int i = N; i < M+1; i++) {
		if (sqrt(i) < 2 && i != 1) cout << i << "\n";
		for (int j = 2; j < sqrt(i); j++) {
			if (i % j == 0) break;

			if (j+1 > sqrt(i)) cout << i << "\n";
		}

	}



	return 0;
}
