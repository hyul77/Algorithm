#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>
#include <unordered_map>


using namespace std;


int binse(vector<int>& list, int num) {
    int ans = -1;

    int min = 0;
    int max = list.size() - 1;

    while (min < max) {
        int mid = (min + max) / 2;

        cout << "mid : " << mid << "\n";
        if (list[mid] == num) {
            ans = mid;
            break;
        }
        else if (list[mid] < num) {
            min = mid + 1;
        }
        else {
            max = mid - 1;
        }

    }

    return ans;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       

    int M, x;
    cin >> M;

    vector<int>all_list;
    for (int i = 0; i < 21; i++) {
        all_list.push_back(i);
    }
    vector<int> list(21, -1);
    for (int i = 0; i < M; i++) {
        string S;
        
        cin >> S;

        if (S == "add") {
            cin >> x;
            if (list[x] == -1) list[x] = 1;
        }
        else if (S == "remove") {
            cin >> x;
            list[x] = -1;
        }
        else if (S == "check") {
            cin >> x;
            if (list[x] == -1) cout << 0 << "\n";
            else cout << 1 << "\n";
        }
        else if (S == "toggle") {
            cin >> x;
            if (list[x] == -1) list[x] = 1;
            else list[x] = -1;
        }
        else if (S == "all") {
            for (int j = 0; j < list.size(); j++) {
                list[j] = 1;
            }
        }
        else {
            for (int j = 0; j < list.size(); j++) {
                list[j] = -1;
            }
        }
    }

    return 0;
}