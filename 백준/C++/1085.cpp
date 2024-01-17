#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int ans;

	if (x > w - x) {
		ans = w - x;
	}
	else {
		ans = x;
	}

	if (y > h - y) {
		if (ans > h - y) {
			ans = h - y;
		}
	}
	else {
		if (ans > y) {
			ans = y;
		}
	}

	cout << ans << "\n";


	return 0;
}