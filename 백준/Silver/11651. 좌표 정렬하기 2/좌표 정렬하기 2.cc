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

	int T, x, y;
	cin >> T;

	vector<pair<int, int>> A;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		A.push_back(make_pair(x, y));
	}
	sort(A.begin(), A.end(), [](const auto& a, const auto& b) {
		return (a.second == b.second) ? (a.first < b.first) : (a.second < b.second);
	});

	for (int i = 0; i < A.size(); i++) {
		cout << A[i].first << " " << A[i].second << "\n";
	}




	return 0;
}