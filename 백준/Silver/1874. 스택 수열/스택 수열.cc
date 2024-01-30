#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
	stack<int> A;
	vector<char> list;

	int T,x,cur=1;
	string ans = "";
	A.push(0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x;
		if (A.top() < x) {
			for (int j = cur; j < x + 1; j++) {
				cur++;
				A.push(j);
				list.push_back('+');
			}
			A.pop();
			list.push_back('-');
		}
		else if (A.top() == x) {
			A.pop();
			list.push_back('-');
		}
		else {
			ans = "NO";
			break;
		}
	}

	if (ans == "NO") cout << ans << "\n";
	else {
		for (int i = 0; i < list.size(); i++) {
			cout << list[i] << "\n";
		}
	}




	return 0;
}