#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,x;

	vector<int>A;
	for (int i = 0; i < 10001; i++) {
		A.push_back(0);
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		A[x]++;
	}

    
	

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < A[i]; j++) {

			cout << i << "\n";
		}
	}
	
	


	return 0;
}