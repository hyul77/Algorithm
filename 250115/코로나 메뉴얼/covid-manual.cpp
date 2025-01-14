#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    // vector<vector<string, int>> v;
    int cnt = 0;

    string yn1, yn2, yn3;
    int a, b, c;
    
    cin >> yn1 >> a;
    if (yn1 == "Y" && a >= 37) {
        cnt++;
    }

    cin >> yn2 >> b;
    if (yn2 == "Y" && b >= 37) {
        cnt++;
    }

    cin >> yn3 >> c;
    if (yn3 == "Y" && c >= 37) {
        cnt++;
    }

    // for (int i = 0; i < 3; i++) {
    //     cin >> yn;
    //     cin >> a;
    //     v[i][0] = yn;
    //     v[i][1] = a;
    // }

    if (cnt >= 2) {
        cout << "E";
    }else {
        cout << "N";
    }
    return 0;
}

// string checkFun(string str, int a) {
//     string rst;
//     if (str == "Y" && a >= 37) {
//         rst = "A";
//     }
//     else if (str == "N" && a >= 37) {
//         rst = "B";
//     }
//     else if (str == "Y" && a < 37) {
//         rst = "C";
//     }else {
//         rst = "D";
//     }
//     return rst;
// }