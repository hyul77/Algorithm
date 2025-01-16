#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    cout << a/b << ".";

    a %= b;
    for(int i = 0; i < 20; i++) {
        a *= 10;
        cout << a/b;

        a %=b;
    }

    return 0;
}