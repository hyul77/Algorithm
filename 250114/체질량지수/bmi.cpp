#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int h, w;
    int obesity = 25;
    string obeStr = "Obesity";
    cin >> h >> w;

    int rst = (10000 * w) / (h * h);

    cout << rst;
    if (rst >=25) {
        cout << "\n" << obeStr;
    }


    return 0;
}