#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double A, B, C;
	cin >> A >> B;
	C = A / B;
	cout << fixed; // 소수점 고정
	cout.precision(11); // 소수점 자리 수 입력
	cout << C << "\n";



	return 0;
}