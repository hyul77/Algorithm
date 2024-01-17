#include <iostream>
#include <string>
#include <vector>

using namespace std;




/*
class Node {
public:
	int num;
	Node* next;

	Node(int _num) {
		this->num = _num;
		this->next = NULL;
	}
};

class LL {
public:
	Node* head;
	Node* tail;
	int size;

	LL() {
		this->size = 0;
		this->head = NULL;
		this->tail = NULL;
	}

	void addTail(Node* node) {
		if (this->size == 0) {
			this->head = node;
			this->tail = node;
		}
		else if (this->size == 1) {
			this->head->next = node;
			tail = node;
		}
		else {
			this->tail->next = node;
			tail = node;
		}
	}




};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, Y;
	cin >> X >> Y;


	

	return 0;
}

*/

#define CHOUT 1
#define NOOUT 0


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;


	vector<int> A;
	vector<int> B;

	for (int i = 0; i < N; i++) {
		A.push_back(i + 1);
		B.push_back(NOOUT);
	}

	vector<int> C;
	int a = K;
	int j = K - 1;
	int count = 0;


	for (;;) {
		if (count == N) {
			break;
		}

		if (j >= N) {
			j -= N;
		}



		if (a==K && B[j] == NOOUT) {
			B[j] = CHOUT;
			C.push_back(A[j]);
			count += 1;
			a = 1;
		}
		else if (B[j] == NOOUT){
			j += 1;
			a += 1;
		}
		else {
			j += 1;
			continue;
		}
	}

	cout << "<" << C[0];
	for (int i = 1; i < N; i++) {
		cout << ", " << C[i];
	}

	cout << ">";



	return 0;
}