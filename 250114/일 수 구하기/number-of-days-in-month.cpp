#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    if (n == 2) {
        cout << "28";
    }
    else if (n % 2 != 0 || n == 8) {
        cout << "31";
    }
    else {
        cout << "30";
    }
    return 0;
}