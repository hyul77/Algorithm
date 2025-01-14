#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int min = a;

    if (min > b) min = b;
    if (min > c) min = c;

    cout << min;

    return 0;
}