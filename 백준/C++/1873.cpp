#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long P, K;

	cin >> P >> K;
	vector<long long> B;
	long long count, A;
	for (;;) {
		count = P % K;
		if (K == 1) {
			break;
		}
		if (count == 0) {
			B.push_back(K);
		}
		K--;
	}
	if (B.size() == 0) {
		A = 0;
	}
	else {
		A = B[B.size() - 1];
	}
	

	if (A != 0) {
		cout << "BAD "<<A<<"\n";
	}
	else {
		cout << "GOOD\n";
	}
	




	return 0;
}