#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int R1, S;

	cin >> R1 >> S;

	int R2;

	R2 = 2 * S - R1;

	cout << R2 << "\n";


	return 0;
}