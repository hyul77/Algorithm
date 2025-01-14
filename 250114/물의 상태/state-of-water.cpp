#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if (a < 0) {
        cout << "ice";
    }
    else if (a >= 100) {
        cout << "vapor";
    }
    else {
        cout << "water";
    }
    return 0;
}