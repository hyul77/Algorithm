#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string A, B;
	int max, min;

	cin >> A >> B;

	
	if (A.size() >= B.size()) {
		max = A.size();
		min = B.size();
	}
	else {
		max = B.size();
		min = A.size();
	}


	for (int i = min; i > 0; i--) { // ����

	}

	for (int i = 0; i < max; i++) { // ����

	}

	for (int i = 0; i < max; i++) { // ���ϱ�

	}


	return 0;
}