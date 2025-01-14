#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    int a;

    for (int i = 0; i < 10; i ++) {
        cin >> a;
        if (a % 2 != 0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}