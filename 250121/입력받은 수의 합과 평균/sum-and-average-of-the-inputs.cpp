#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int cnt;
    cin >> cnt;

    int sum = 0;
    for (int i = 0; i < cnt; i++) {
        int num;
        cin >> num;

        sum += num;
    }

    double rst = (double)sum / (double)cnt;

    cout << sum << " " << fixed << setprecision(1) << round(rst * 10) / 10;

    return 0;
}