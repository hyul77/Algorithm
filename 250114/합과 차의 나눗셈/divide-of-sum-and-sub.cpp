#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    double sum = a + b;
    double min = a - b;
    double rst = sum/min;

    cout << fixed << setprecision(2) << round(rst*100)/100;

    return 0;
}