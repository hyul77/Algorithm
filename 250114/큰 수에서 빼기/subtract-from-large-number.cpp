#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    
    cin >> a >> b;

    if (a < b) {
        cout << b-a;
    }
    else {
        cout << a-b;
    }
    return 0;
}