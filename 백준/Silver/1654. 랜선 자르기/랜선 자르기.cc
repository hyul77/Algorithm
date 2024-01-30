#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	long long K, N, x;
	vector<long long>cod;
	cin >> K >> N;

	long long mmax = 0;
	for (int i = 0; i < K; i++) {
		cin >> x;
		cod.push_back(x);
		mmax = max(mmax, cod[i]);

	}
	
	
	
	long long ans = 0;
	long long min = 1;
	long long max = mmax;
	

	while (min <= max) {
		long long mid = (max + min) / 2;
		long long count = 0;

		for (int i = 0; i < K; i++) {
			count += cod[i] / mid;
		}

		
		if (count >= N) {
			ans = mid;
			min = mid + 1;
		}
		else {
			max = mid - 1; 
		}
	}

	cout << ans << "\n";

	return 0;
}
