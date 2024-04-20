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
	
	int X, sum=0;

	for (int i = 0; i < 4; i++) {
		cin >> X;
		sum += X;
	}
	cout << sum / 60 << "\n";
	cout << sum % 60 << "\n";
	

    return 0;
}