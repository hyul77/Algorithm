#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string N;

	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		if (N[i]>=65 && N[i] <=90){
			N[i] += 32;
		}
		else{
			N[i] -= 32;
		}
	}
	cout << N;

	



	return 0;
}