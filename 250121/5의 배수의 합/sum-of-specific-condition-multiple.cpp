#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int min = a;
    int max = b;
    
    if (min > b) min = b;
    if (max < a) max = a;

    int sum = 0;
    for (int i = min; i <= max; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}