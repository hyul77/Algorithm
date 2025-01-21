#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    // int n;
    // vector<int> V;
    // for (;;) {
    //     cin >> n;
    //     V.push_back(n);
    // }

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) continue;
        if (a % 3 != 0) continue;
        sum += a;
    }

    cout << sum;

    return 0;
}