#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int A, B, V;
	cin >> A >> B >> V;

	int ans = (V - A) / (A-B);
	if ((V - A) % (A - B) != 0) {
		ans++;
	}
	cout << ans + 1 << "\n";
	
	


	return 0;
}