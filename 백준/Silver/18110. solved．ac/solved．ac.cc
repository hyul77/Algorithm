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

	int T, x;
	vector<int> all_list;
	cin >> T;
	if (T == 0) {
		cout << 0 << "\n";
	}
	else {
		for (int i = 0; i < T; i++) {
			cin >> x;
			all_list.push_back(x);
		}

		sort(all_list.begin(), all_list.end());

		int count = static_cast<int>(T * 0.15 + 0.5);
		double ans = 0;
		for (int i = count; i < T - count; i++) {
			ans += all_list[i];
		}
		ans /= (T - 2 * count);
		ans = round(ans);
		cout << static_cast<int>(ans) << "\n";
	}
	

	return 0;
}
