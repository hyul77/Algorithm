#include <iostream>
#include <vector>
#include <string>

using namespace std;


int YS(int _x) {
	int a = 0;
	a = _x / 30;
	a *= 10;

	if (_x % 29 != 0) {
		a += 10;
	}
	

	return a;

}

int MS(int _x) {
	int a = 0;
	a = _x / 60;
	a *= 15;

	if (_x % 59 != 0) {
		a += 15;
	}

	return a;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,X;
	vector<int> ans;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> X;
		ans.push_back(X);
	}
	int A = 0, B = 0;
	for (int i = 0; i < T; i++) {
		A += YS(ans[i]);
		B += MS(ans[i]);
	}

	if (A == B) {
		cout << "Y M " << A<< "\n";
	}
	else if (A < B) {
		cout << "Y " << A<<"\n";
	}
	else {
		cout << "M " << B<<"\n";
	}



	return 0;
}