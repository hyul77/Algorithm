#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    double a, b;
    cin >> a >> b;

    double sum = a + b;
    double avg = sum / 2;

    cout << sum << " " << fixed << setprecision(1) << round(avg*10) / 10;
    return 0;
}