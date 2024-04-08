#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <deque>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	long long x;
	cin >> K;

	stack<long long> A;
	for (int i = 0; i < K; i++) {
		cin >> x;
		if (x == 0) A.pop();
		else {
			A.push(x);
		}
	}

	long long ans = 0;
	long long T = A.size();
	for (int i = 0; i < T; i++) {
		ans += A.top();
		A.pop();
	}
	cout << ans << "\n";


	return 0;
}
