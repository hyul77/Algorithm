#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#include <set>
#include <queue>
#include <cmath> 

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int X;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> X;
		if (X < 40) {
			sum += 40;
		}
		else {
			sum += X;
		}
	}

	cout << sum / 5 << "\n";

	

    return 0;
}