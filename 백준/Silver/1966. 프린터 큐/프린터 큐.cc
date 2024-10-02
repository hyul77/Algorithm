#include <iostream>
#include <queue>


using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, X;
	cin >> T;
	for (int te = 0; te < T; te++) {
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < N; i++) {
			cin >> X;
			q.push(make_pair(X,i));
			pq.push(X);
		}
		int count = 0;
		for (;;) {
			if (q.size() == 0) break;
			int cur_x = q.front().first;
			int cur_i = q.front().second;
			q.pop();

			if (cur_x < pq.top()) {
				q.push(make_pair(cur_x, cur_i));
			}
			else {
				pq.pop();
				count++;
				if (cur_i == M) {
					cout << count << "\n";
					break;
				}
			}
		}
		
	}



	return 0;
}