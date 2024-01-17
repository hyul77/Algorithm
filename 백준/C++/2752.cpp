#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X,Y,Z;
	cin >> X>>Y>>Z;
	int N;

	for (;;) {
		if (X > Y) {
			N = X;
			X = Y;
			Y = N;
		}

		else if (Y > Z) {
			N = Y;
			Y = Z;
			Z = N;
		}

		else {
			break;
		}
	}
	
	
	cout << X << " " << Y << " " << Z << "\n";

	return 0;
}