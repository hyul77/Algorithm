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
	
    int N, M;
    cin >> N >> M;

    set<string> unheard;
    set<string> unseen;

    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; ++i) {
        string name;
        cin >> name;
        unseen.insert(name);
    }

    vector<string> result;
    for (const auto& name : unheard) {
        if (unseen.find(name) != unseen.end()) {
            result.push_back(name);
        }
    }

    cout << result.size() << '\n';

    sort(result.begin(), result.end());
    for (const auto& name : result) {
        cout << name << '\n';
    }

    return 0;
}