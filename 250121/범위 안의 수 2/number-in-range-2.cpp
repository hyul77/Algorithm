#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        if (num >= 0 && num <= 200) {
            sum += num;
            cnt++;
        }
    }

    double rst = (double)sum / (double)cnt;
    cout << sum << " " << fixed << setprecision(1) << round(rst * 10) / 10;

    return 0;
}