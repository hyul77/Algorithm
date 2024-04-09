#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int N, M, B;
	cin >> N >> M >> B;

	vector<vector<int>> land(N, vector<int>(M));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> land[i][j];
		}
	}

	int minTime = INT_MAX;
	int maxHeight = 0;

	// 맨 오른쪽 아래 좌표의 높이
	int targetHeight = land[N - 1][M - 1];

	// 블록을 제거할 때 걸리는 시간 계산
	for (int h = 0; h <= 256; ++h) {
		int time = 0;
		int blocks = 0;

		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if (land[i][j] > h) {
					time += 2 * (land[i][j] - h);
					blocks += (land[i][j] - h);
				}
				else {
					time += h - land[i][j];
					blocks -= (h - land[i][j]);
				}
			}
		}

		if (blocks + B >= 0) {
			if (time <= minTime) {
				minTime = time;
				maxHeight = h;
			}
		}
	}

	cout << minTime << " " << maxHeight << endl;

	return 0;
}