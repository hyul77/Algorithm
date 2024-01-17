#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, Y, Z, M;
	cin >> X >> Y >> Z;
	cin >> M;
	int N=0, T = 0;

	if (Z+M >= 60) {
		N = (Z+M) / 60;
		Z = (Z+M) % 60;

		if (Y + N >= 60) {
			T = (Y + N) / 60;
			Y = (Y + N) % 60;

			if (X + T >= 24) {
				X = (X + T)% 24;
			}
			else {
				X = X + T;
			}
		}
		else {
			Y = Y + N;
		}
	}

	else {
		Z = Z + M;
	}

	cout << X << " " << Y << " " << Z << "\n";

	


	return 0;
}