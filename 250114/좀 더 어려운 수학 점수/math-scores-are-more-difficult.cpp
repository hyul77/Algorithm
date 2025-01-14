#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string rst;
    if (a > c) { rst = "A";} else { rst = "B";}
    if (a == c) {
        if (b > d) { rst = "A";} else  { rst = "B";}
    }
    cout << rst;

    return 0;
}