#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <deque>
#include <algorithm>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x,M;

	map<int, int>A;
	vector<int>keys;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		keys.push_back(x);
		A[x] += 1;
	}
	sort(keys.begin(), keys.end());
	keys.erase(unique(keys.begin(), keys.end()), keys.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;
		cout << A[x]<<" ";
	}


	return 0;
}