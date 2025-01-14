#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;

    cout << max;
    return 0;
}