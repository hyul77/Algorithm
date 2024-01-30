#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int>A;
	int N;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		A.push(i);
	}
	while (A.size()>1) {
		A.pop();
		int back = A.front();
		A.pop();
		A.push(back);
	}

	cout << A.front() << "\n";


	return 0;
}
