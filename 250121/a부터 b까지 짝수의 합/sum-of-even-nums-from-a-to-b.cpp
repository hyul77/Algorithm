#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) continue;
        sum += i;
    }

    cout << sum;
    
    return 0;
}