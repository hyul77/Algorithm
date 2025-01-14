#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    string rst = a >= 100 ? "pass" : "failure";

    cout << rst;
    return 0;
}