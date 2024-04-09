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

	int T,x;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x;
		vector<pair<int, int>> A(x + 1);
		if (x == 0) {
			A[0].first = 1;
			A[0].second = 0;
		}
		else if (x==1){
			A[0].first = 1;
			A[0].second = 0;
			A[1].first = 0;
			A[1].second = 1;
		}
		else {
			A[0].first = 1;
			A[0].second = 0;
			A[1].first = 0;
			A[1].second = 1;

			for (int j = 2; j < x + 1; j++) {
				A[j].first = A[j - 1].first + A[j - 2].first;
				A[j].second = A[j - 1].second + A[j - 2].second;
			}
		}
		
		cout << A[x].first << " " << A[x].second << "\n";
	}

	return 0;
}
