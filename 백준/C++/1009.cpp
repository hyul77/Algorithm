#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,a,b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;

		int ans = 1;
		for (int j = 0; j < b; j++) {
			ans *= a;
			ans %= 10;
		}
		if (ans == 0) {
			ans = 10;
		}
		cout << ans << "\n";
	}
	

	

	return 0;
}