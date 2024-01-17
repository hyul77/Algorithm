#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int count = 0;
	int S, ans;
	cin >> S;
	ans = S;
	int a, b;
	for (;;) {
		a = ans / 10;
		b = ans % 10;
		ans = b * 10 + (a + b) % 10;
		count++;
		if (S == ans) {
			break;
		}
	}

	cout << count << "\n";



	return 0;
}