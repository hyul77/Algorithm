#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	vector<int> list;
	int X, max=1;
	for (int i = 0; i < 5; i++) {
		cin >> X;
		list.push_back(X);
	}
	int count;
	for (;;) {
		count = 0;
		for (int i = 0; i < 5; i++) {
			if (max % list[i] == 0) {
				count++;
			}
		}
		if (count >= 3) {
			break;
		}
		max++;
	}

	cout << max << "\n";





	return 0;
}