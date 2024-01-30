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

	int X, Y;
	cin >> X >> Y;
	int amax = max(X, Y);
	int amin = min(X, Y);
	int gcd=1;
	while (amin != 0) {
		int tmp = amax % amin;
		amax = amin;
		amin = tmp;
	}
	gcd = amax;

	cout << gcd << "\n" << X*Y/gcd << "\n";


	return 0;
}