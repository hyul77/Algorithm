#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_set<string> nolisten;
	set<string>ans;

	string name;

	for (int i = 0; i < N; i++) {
		cin >> name;
		nolisten.insert(name);
	}
	int count = 0;
	for (int i = 0; i < M; i++) {
		cin >> name;
		if (nolisten.find(name) != nolisten.end()) {
			ans.insert(name);
		}
	}



	cout << ans.size() << "\n";
	for (const auto& s : ans) {
		cout << s << "\n";
	}
	

	return 0;
}