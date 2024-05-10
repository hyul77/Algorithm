#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int p;
    vector<int> list;

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> p;
        list.push_back(p);
    }

    sort(list.begin(), list.end());

    int ans = 0;
    int cur = 0;
    for (int i = 0; i < list.size(); i++) {
        cur += list[i];
        ans += cur;
    }

    cout << ans << "\n";
        
    return 0;
}
