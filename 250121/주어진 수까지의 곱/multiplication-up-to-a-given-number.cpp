#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int rst = 1;
    for (int i = a; i <= b; i++) {
        rst *= i;
    }

    cout << rst;
    
    return 0;
}