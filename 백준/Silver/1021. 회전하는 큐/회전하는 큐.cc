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
       
    int N, M;
    cin >> N >> M;
    deque<int> dq;
    vector<int> pos(M);

    for (int i = 1; i < N+1; i++) {
        dq.push_back(i);
    }

    for (int i = 0; i < M; ++i) {
        cin >> pos[i];
    }

    int ans = 0;

    for (int i = 0; i < M; ++i) {
        int target = pos[i];

        auto it = find(dq.begin(), dq.end(), target);
        int index = distance(dq.begin(), it);
        if (index < dq.size() - index) {
            while (dq.front() != target) {
                dq.push_back(dq.front());
                dq.pop_front();
                ans++;
            }
        }

        else {
            while (dq.front() != target) {
                dq.push_front(dq.back());
                dq.pop_back();
                ans++;
            }
        }

        dq.pop_front();
    }

    cout << ans << "\n";
    

    return 0;
}