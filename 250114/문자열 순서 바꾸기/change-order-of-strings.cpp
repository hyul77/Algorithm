#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    string s, t;

    cin >> s >> t;

    string r;
    r = t;
    t = s;
    s = r;

    cout << s << "\n" << t; 
    return 0;
}