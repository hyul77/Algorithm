#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>
#include <unordered_map>


using namespace std;

void preorder(const vector<char>& tree, int cur) {
    if (cur >= tree.size() || tree[cur] == '.') return;
    cout << tree[cur];
    preorder(tree, 2 * cur + 1);
    preorder(tree, 2 * cur + 2);
}

void inorder(const vector<char>& tree, int cur) {
    if (cur >= tree.size() || tree[cur] == '.') return;
    inorder(tree, 2 * cur + 1);
    cout << tree[cur];
    inorder(tree, 2 * cur + 2);
}

void postorder(const vector<char>& tree, int cur) {
    if (cur >= tree.size() || tree[cur] == '.') return;
    postorder(tree, 2 * cur + 1);
    postorder(tree, 2 * cur + 2);
    cout << tree[cur];
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char A, B, C;
    int T;
    cin >> T;
    int size = pow(2, T) -1;
    vector<char>tree(size);
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C;
        int cur = 0;
        int cur_size = pow(2, i+1) - 1;
        for (int j = 0; j < cur_size; j++) {
            if (tree[j] == A) cur = j;
        }
        tree[cur] = A;
        tree[2 * cur + 1] = B;
        tree[2 * cur + 2] = C;
    }
    preorder(tree, 0);
    cout << "\n";
    inorder(tree, 0);
    cout << "\n";
    postorder(tree, 0);
    cout << "\n";


    return 0;
}