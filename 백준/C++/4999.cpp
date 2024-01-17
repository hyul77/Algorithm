#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string X, Y;

	cin >> X;
	cin >> Y;

	if (X.size() < Y.size()) {
		cout << "no\n";
	}
	else {
		cout << "go\n";
	}





	return 0;
}