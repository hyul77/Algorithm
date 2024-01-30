#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	long long x;
	vector<long long>A;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		A.push_back(x);
	}

	sort(A.begin(), A.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;
		bool found = binary_search(A.begin(), A.end(), x);

		cout << (found ? 1 : 0) << "\n";
	}


	return 0;
}