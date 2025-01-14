#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int max = a;
    int min = a;
    if (max < b) max = b;
    if (min > b) min = b;

    for (int i = max; i >= min; i--) {
        cout << i << " ";
    }

    return 0;
}