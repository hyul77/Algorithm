#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int min  = a;

    if (min <= b) min = a;
    if (min > c) min = c;

    if (min == a) { cout << "1 "; } else { cout << "0 "; }

    if (a == b && b == c) { cout << "1 "; } else { cout << "0 ";}




    return 0;
}