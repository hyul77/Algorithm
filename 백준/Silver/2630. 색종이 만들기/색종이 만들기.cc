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
int white = 0;
int blue = 0;

void countt(vector<vector<int>>& list, int x, int y, int size) {
    int color = list[x][y];
    bool same = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (list[i][j] != color) {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same) {
        if (color == 0) white++;
        else blue++;
    }
    else {
        int newSize = size / 2;
        countt(list, x, y, newSize);
        countt(list, x+newSize, y, newSize);
        countt(list, x, y+newSize, newSize);
        countt(list, x + newSize, y + newSize, newSize);

    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    
    int N;
    cin >> N;

    vector<vector<int>> list(N, vector<int>(N));


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> list[i][j];
        }
    }

    countt(list, 0, 0, N);
    cout << white << "\n" << blue << "\n";

    return 0;
}