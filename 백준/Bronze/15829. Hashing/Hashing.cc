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
	int N;
	string S;
	cin >> N;
	cin >> S;

	vector<int> A;
	for (int i = 0; i < S.size(); i++) {
		A.push_back((int)S[i] - 96);
	}

	long long ans=0;
	long long x = 1;
	for (int i = 0; i < S.size(); i++) {
		ans += A[i] * x;
		ans %= 1234567891;
		x *= 31;
		x %= 1234567891;
	}
	cout << ans << "\n";
	
	


	return 0;
}