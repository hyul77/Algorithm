#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	long long x;

	cin >> N;
	priority_queue<long long> pq;
	for (int te = 0; te < N; te++) {
		cin >> x;
		if (x == 0) {
			if (pq.size() == 0) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() * -1 << "\n";
				pq.pop();
			}
		}
		else {
			x *= -1;
			pq.push(x);
		}
		
	}
	

	return 0;
}