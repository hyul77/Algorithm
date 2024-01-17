#include <iostream>
#include <array>

using namespace std;

int A[10000001];
int cost = 0;


int promote(int E[], int hstop, int va, int h, int n) {
	int vacstop;
	if (h <= hstop) {
		vacstop = va;
	}
	else if (2 * va + 1 <= n) {
		if (E[2 * va] <= E[2 * va + 1]) {
			E[va] = E[2 * va + 1];
			E[2 * va + 1] = 0;
			cost += 1;
			vacstop = promote(E, hstop, 2 * va + 1, h - 1, n);
		}
		else {
			E[va] = E[2 * va];
			E[2 * va] = 0;
			cost += 1;
			vacstop = promote(E, hstop, 2 * va, h - 1, n);
		}
	}
	else if (2 * va == n) {
		E[va] = E[2 * va];
		E[2 * va] = 0;
		cost += 1;
		vacstop = promote(E, hstop, 2 * va, h - 1, n);
	}
	else {
		vacstop = promote(E, hstop, va, h - 1, n);
	}
	return vacstop;
}

void bubbleUpheap(int E[], int root, int k, int va, int n) {
	if (va == root || va == 0) E[root] = k;
	else {
		int parent = va / 2;
		if (k <= E[parent]) {
			cost += 1;
			E[va] = k;
		}
		else {
			E[va] = E[parent];
			E[parent] = 0;
			bubbleUpheap(E, root, k, parent, n);
		}
	}
}


void fixHeapfast(int E[], int n, int k, int va, int h) {
	if (h <= 1) {
		if (h == 0) return;
		else {

			if (2 * va + 1 <= n) {
				if (E[2 * va] <= E[2 * va + 1] && E[2 * va + 1] >= k) {
					E[va] = E[2 * va + 1];
					E[2 * va + 1] = k;
					cost += 1;

				}
				else if (E[2 * va] > E[2 * va + 1] && E[2 * va] >= k) {
					E[va] = E[2 * va];
					E[2 * va] = k;
					cost += 1;
				}
				else {
					bubbleUpheap(A, 1, k, va, n);
				}
			}
			else if (2 * va == n) {
				if (E[2 * va] >= k) {
					E[va] = E[2 * va];
					E[2 * va] = k;
					cost += 1;
				}
				else {
					bubbleUpheap(A, 1, k, va, n);
				}
			}
			else {
				bubbleUpheap(A, 1, k, va, n);
			}
		}
	}

	else {
		int hstop = h / 2;
		int vacstop = promote(E, hstop, va, h, n);
		int vacparent = vacstop / 2;
		if (E[vacparent] <= k) {
			E[vacstop] = E[vacparent];
			E[vacparent] = 0;
			bubbleUpheap(E, va, k, vacparent, n);
		}
		else {
			fixHeapfast(E, n, k, vacstop, hstop);
		}
	}
}

void deleteMax(int E[], int n) {
	int va = 1;
	int h = 0;
	int k = E[n];
	int a = n;

	for (;;) {
		if (a == 0) break;
		else {
			a /= 2;
			h += 1;
		}

	}

	fixHeapfast(E, n - 1, k, va, h);

}

void heapsort(int E[], int n) {

	for (int i = n; i > 1; i--) {
		int curMax = E[1];
		deleteMax(E, i);
		E[i] = curMax;
	}
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int N, x;
	int h = 0;
	for (int i = 0; i < 1000001; i++) {
		A[i] = -1;
	}

	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		cin >> x;
		bubbleUpheap(A, 1, x, i, N);
	}



	heapsort(A, N);

	for (int i = 1; i < N + 1; i++) {
		cout << A[i] << "\n";
	}

	return 0;
}


/*
1
3
3 2 1



4
5
5 3 2 1 4
9
6 2 4 1 9 7 3 8 5
16
11 5 7 12 1 6 15 13 3 2 14 9 8 16 10 4
17
16 7 6 14 8 11 1 2 13 17 12 10 3 15 5 9 4

6
18
42
49

1
31
3 18 21 13 12 8 10 15 22 31 28 6 1 27 11 20 16 19 7 26 29 5 25 9 17 30 4 24 2 23 14




*/