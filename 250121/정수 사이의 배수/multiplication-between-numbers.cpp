#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt++;
        }
    }
    double rst = (double)sum/(double)cnt;
    cout << sum << " " << fixed << setprecision(1) << round(rst * 10) / 10;

    return 0;
}