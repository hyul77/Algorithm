#include <iostream>
#include <math.h>

using namespace std;

// MAX Heap�� �̿��ؼ� �������� ������ �ϴ� �ڵ� �Դϴ�.

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int parent(int a) {
	return (a / 2);
}

int left_child(int a) {
	return 2 * a;
}

int right_child(int a) {
	return (2 * a + 1);
}

int promote(int* arr, int hStop, int vacant, int h, int max_size) { // arr = �迭, hStop = �󸶳� ������ ������, vacant = ������ġ, h = ����(����������)
	int vacStop;// ������ ��ġ

	if (h <= hStop) { // ��������ŭ ����������� ������ġ�� ���Ͻ�Ŵ
		vacStop = vacant;
	}
	else if (arr[left_child(vacant)] < arr[right_child(vacant)] && right_child(vacant) <= max_size) { // ���� �ڽ��� �� Ŭ ���
		swap(&arr[vacant], &arr[right_child(vacant)]);
		vacStop = promote(arr, hStop, right_child(vacant), h - 1, max_size);
	}
	else { // ���� �ڽ��� �� Ŭ���
		swap(&arr[vacant], &arr[left_child(vacant)]);
		vacStop = promote(arr, hStop, left_child(vacant), h - 1, max_size);
	}

	return vacStop;
}

void BubbleUpHeap(int* arr, int root, int K, int vacant) { // root = ��Ʈ ���, K = vacant�� ���� ��, vacant = ���� ��ġ (�ش� �ڵ忡�� ��Ʈ = 1������ ���� ���� �ʿ��ϹǷ� �־���)
	if (vacant == root) arr[vacant] = K;
	else {
		int Parent = parent(vacant);
		if (K < arr[Parent]) { // �θ� ���� �۴ٸ� �ڱ���ġ�� ã����
			arr[vacant] = K;
		}
		else { // �θ� ���� ũ�ٸ� ��������� ��� ����
			swap(&arr[vacant], &arr[Parent]);
			BubbleUpHeap(arr, root, K, Parent);
		}
	}

	return;
}

void FixHeapFast(int* arr, int vacant, int K, int h, int max_size) { // K = vaccant�� ���� ��, vaccant = ������ġ(��Ʈ), h = ����
	if (h <= 1) { // h�� 1�����ϰ��
		if (h == 0) return;
		else {
			if (left_child(vacant) > max_size) return; // h�� 1�̳������� �ش����� �ڽ��� ���������ִ�.

			if (K < arr[left_child(vacant)]) swap(&arr[vacant], &arr[left_child(vacant)]);

			if (arr[vacant] < arr[right_child(vacant)] && right_child(vacant) <= max_size) swap(&arr[vacant], &arr[right_child(vacant)]);
			return;
		}
	}
	else {
		int hStop = h / 2;
		int vacStop = promote(arr, hStop, vacant, h, max_size); // ���ο� ��ġ
		int vacParent = parent(vacStop); // ���� ã�� ��ġ�� �θ�

		if (arr[vacParent] < K) {
			swap(&arr[vacStop], &arr[vacParent]);
			BubbleUpHeap(arr, vacant, K, vacParent);
		}
		else FixHeapFast(arr, vacStop, K, hStop, max_size);
	}

	return;
}
void constructHeap(int* arr, int node, int max_size) {
	int K;
	if (left_child(node) <= max_size) { // Leaf�� �ƴҰ��
		constructHeap(arr, left_child(node), max_size);
		constructHeap(arr, right_child(node), max_size);
		K = arr[node];
		FixHeapFast(arr, node, K, 1,max_size);
	}
}

void heapSort(int* arr, int node, int size) {
	constructHeap(arr, node, size);

	int h; // ���� ���

	for (int last_leaf = size; last_leaf >= 2; last_leaf--) {
		swap(&arr[1], &arr[last_leaf]);
		h = log2(last_leaf - 1);
		FixHeapFast(arr, 1, arr[1], h, last_leaf - 1);
	}
}

int main() {
	int C;
	cin >> C;
	int* arr = new int[C + 1];

	for (int i = 1; i <= C; ++i) {
		cin >> arr[i];
	}

	heapSort(arr, 1, C);
	for (int i = 1; i <= C; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
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