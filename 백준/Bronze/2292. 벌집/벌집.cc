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

	int X;
	cin >> X;
	
	int count = 1;
	int tmp = 1;
	for (;;) {
		if (X <= tmp) {
			cout << count << "\n";
			break;
		}
		tmp += 6 * count;
		count += 1;
	}


	return 0;
}
