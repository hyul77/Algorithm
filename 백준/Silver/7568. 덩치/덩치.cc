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

	int N, x, y;
	cin >> N;
	vector<pair<int, int>> A;
	
	
	for (int t = 0; t < N; t++) {
		cin >> x >> y;
		A.push_back(make_pair(x, y));
	}

	vector<int> ranks(N, 1);

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j) continue; 
			if (A[i].first < A[j].first && A[i].second < A[j].second) {
				ranks[i]++; 
			}
		}
	}


	for (int i = 0; i < N; i++) {
		cout << ranks[i] << " ";
	}
	cout << "\n";




	return 0;
}