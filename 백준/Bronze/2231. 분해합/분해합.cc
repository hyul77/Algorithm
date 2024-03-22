#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;



int decomposed_sum(int n) {
	int sum = n; 
	while (n > 0) {
		sum += n % 10; 
		n /= 10; 
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	int answer = 0;

	for (int i = 1; i < N; ++i) {
		if (decomposed_sum(i) == N) {
			answer = i; 
			break; 
		}
	}
	cout << answer << "\n";
	return 0;
}