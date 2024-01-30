#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int CHESS_SIZE = 8;

int countRepaint(const vector<string>& board, int startX, int startY) {
    int repaintCount = 0;
    char startColor = board[startX][startY]; 

    for (int i = startX; i < startX + CHESS_SIZE; ++i) {
        for (int j = startY; j < startY + CHESS_SIZE; ++j) {
            if (board[i][j] != startColor) {
                repaintCount++;
            }
            startColor = (startColor == 'W') ? 'B' : 'W';
        }
        startColor = (startColor == 'W') ? 'B' : 'W';
    }

    return min(repaintCount, CHESS_SIZE * CHESS_SIZE - repaintCount);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; ++i) {
        cin >> board[i];
    }

    int minRepaint = 2500;  
    for (int i = 0; i <= N - CHESS_SIZE; ++i) {
        for (int j = 0; j <= M - CHESS_SIZE; ++j) {
            minRepaint = min(minRepaint, countRepaint(board, i, j));
        }
    }

    cout << minRepaint << endl;

    return 0;
}