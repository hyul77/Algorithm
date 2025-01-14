#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    double a, b;
    string c;

    cin >> c >> a >> b;

    cout << c << "\n";
    cout << fixed << setprecision(2) << round(a*100)/100 << "\n";
    cout << fixed << setprecision(2) << round(b*100)/100;
    return 0;
}