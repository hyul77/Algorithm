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

	int N, x;
	string S;

	map<int, vector<string>>A;
	vector<int>ages;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> S;
		ages.push_back(x);
		A[x].push_back(S);
	}
	sort(ages.begin(), ages.end());
	ages.erase(unique(ages.begin(), ages.end()), ages.end());

	for (const auto& age : ages) {
		auto& names = A[age];
		for (const auto& name : names) {
			cout << age << " " << name << "\n";
		}
	}
	



	return 0;
}
