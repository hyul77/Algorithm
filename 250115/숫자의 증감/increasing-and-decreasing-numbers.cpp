#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int n;

    cin >> s >> n;

    if (s == "A") {
        for (int i = 0; i < n; i++) {
            cout << i+1 << " ";
        }
    }else {
        for (int j = n; j >=1; j--) {
            cout << j << " ";
        }
    }

    return 0;
}