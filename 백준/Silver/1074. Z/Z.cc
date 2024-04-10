#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;


int z_order(int n, int r, int c) {
    if (n == 0) return 0;

    int half_size = pow(2, n - 1);
    bool next_row = r < half_size; 
    bool next_col = c < half_size; 

    if (!next_row) r -= half_size; 
    if (!next_col) c -= half_size; 

    int next_num = half_size * half_size;

    if (!next_row && !next_col) return next_num * 3 + z_order(n - 1, r, c); 
    else if (!next_row) return next_num * 2 + z_order(n - 1, r, c); 
    else if (!next_col) return next_num + z_order(n - 1, r, c); 
    else return z_order(n - 1, r, c);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, r, c;
    cin >> N >> r >> c;
    cout << z_order(N, r, c) << endl;

    return 0;
}
