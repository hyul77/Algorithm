#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>
#include <sstream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string P, input;
        cin >> P;

        int X;
        cin >> X;

        deque<int> arr;
        cin >> input;

        stringstream ss(input.substr(1, input.size() - 2)); 
        string number;
        while (getline(ss, number, ',')) {
            if (!number.empty()) {
                arr.push_back(stoi(number));
            }
        }

        bool error = false;
        bool isReversed = false;

        for (auto cmd : P) {
            if (cmd == 'R') {
                isReversed = !isReversed;
            }
            else {
                if (arr.empty()) {
                    cout << "error\n";
                    error = true;
                    break;
                }
                else {
                    if (!isReversed) {
                        arr.pop_front();
                    }
                    else {
                        arr.pop_back();
                    }
                }
            }
        }

        if (!error) {
            cout << '[';
            if (!isReversed) {
                while (!arr.empty()) {
                    cout << arr.front();
                    arr.pop_front();
                    if (!arr.empty()) {
                        cout << ",";
                    }
                }
            } else {
                while (!arr.empty()) {
                    cout << arr.back();
                    arr.pop_back();
                    if (!arr.empty()) {
                        cout << ",";
                    }
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}
