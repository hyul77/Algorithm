#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int i = 1;
    while (i*3 <= n) {
        cout << i*3 << " ";
        i++;
    }

    return 0;
}