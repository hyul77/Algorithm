#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	long long X;
	priority_queue<long long> list;
	cin >> N;
	for (int te = 0; te < N; te++) {
		cin >> X;
		if (X != 0) {
			list.push(X);
		}
		else {
			if (list.size() == 0) {
				cout << 0 << "\n";
			}
			else {
				long long y = list.top();
				list.pop();
				cout << y << "\n";
			}
		}
	}

	



	return 0;
}