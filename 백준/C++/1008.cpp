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
	cout << fixed; // �Ҽ��� ����
	cout.precision(11); // �Ҽ��� �ڸ� �� �Է�
	cout << C << "\n";



	return 0;
}