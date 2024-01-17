#include <iostream>
#include <array>

using namespace std;

int A[100001];
int T_time = 0;


void bubbleUpheap(int A[], int root, int k, int va) {
	if (root == 0) {
		return;
	}

	if (va <= root) {
		A[va] = k;
	}
	else {
		int parent = va / 2;

		if (k <= A[parent]) {
			A[va] = k;
		}
		else {
			A[va] = A[parent];
			T_time += 1;
			bubbleUpheap(A, root, k, parent);
		}
		
	}
	
}

int promote(int A[], int hstop, int va, int h, int n) {
	int vacstop;
	if (h <= hstop) {
		vacstop = va;
	}
	else if (A[2 * va] <= A[2 * va + 1]) {
		if (2 * va+1 <= n) {
			A[va] = A[2 * va + 1];
			T_time += 1;
			vacstop = promote(A, hstop, 2 * va + 1, h - 1, n);
		}
		else {
			vacstop = promote(A, hstop, va, h - 1, n);
		}
	}
	else {
		if (2 * va <= n) {
			A[va] = A[2 * va];
			T_time += 1;
			vacstop = promote(A, hstop, 2 * va, h - 1, n);
		}
		else {
			vacstop = promote(A, hstop, va, h - 1, n);
		}
		
	}

	return vacstop;
}


void fixHeapFast(int A[], int n, int k, int va, int h) {
	if (h <= 1) {
		if (h == 0) return;
		else {
			bubbleUpheap(A, 1, k, va);
		}
		

	}
	else {
		int hstop = h / 2;
		int vacstop = promote(A, hstop, va, h, n);
		int vacparent = vacstop / 2;
		if (A[vacparent] <= k) {
			A[vacstop] = A[vacparent];
			bubbleUpheap(A, va, k, vacparent);
		}
		else {
			fixHeapFast(A, n, k, vacstop, hstop);
		}


	}
}

void deleteMax(int A[], int n) {
	int va = 1;
	int h = 0;
	int k = A[n];
	int a = n;

	for (;;) {
		if (a == 0) break;
		a /= 2;
		h += 1;
	}
	
	
	fixHeapFast(A, n-1, k, va, h);

}

void heapsort(int A[], int n) {

	for (int i = n; i > 1; i--) {
		int curMax = A[1];
		T_time += 1;
		deleteMax(A, i);
		A[i] = curMax;
	}
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int ti = 0; ti < T; ti++) {
		int N, x;
		int h = 0;
		for (int i = 0; i < 100001; i++) {
			A[i] = -1;
		}

		cin >> N;

		if (N < 2 || N> 100000) {
			cout << "Error\n";
			break;
		}
		for (int i = 1; i < N+1; i++) {
			cin >> x;
			bubbleUpheap(A, 1, x, i);
		}


		for (int i = 1; i < N + 1; i++) {
			cout << A[i] << " ";
		}
		cout << "\n";

		T_time = 0;
		heapsort(A, N);
		cout << T_time << "\n";

		for (int i = 1; i < N+1; i++) {
			cout << A[i] << " ";
		}
		cout << "\n";

		
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



*/