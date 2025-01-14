#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    if (a >= 3000) {
        cout << "book";
    }
    else if (a >= 1000) {
        cout << "mask";
    }
    else if (a >= 500) {
        cout << "pen";
    }
    else {
        cout << "no";
    }
    return 0;
}