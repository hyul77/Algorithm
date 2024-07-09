#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>


using namespace std;


long long half_mod(long long A, long long B, long long C) {
    if (B == 0) {
        return 1;
    }
    long long half = half_mod(A, B / 2, C);
    long long result = (half * half) % C;
    if (B % 2 != 0) {
        result = (result * A) % C;
    }
    return result;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    long long A, B, C;
    cin >> A >> B >> C;

    
    cout << half_mod(A,B,C) << "\n";

    return 0;
}