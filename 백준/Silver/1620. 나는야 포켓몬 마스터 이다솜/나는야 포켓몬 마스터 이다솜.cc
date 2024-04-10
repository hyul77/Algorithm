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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N, M;
    cin >> N >> M; //포켓몬의 개수 N, 맞춰야 하는 문제의 개수 M

    map<string, int> name_to_num;
    map<int, string> num_to_name;

    string name;

    for (int i = 1; i < N + 1; i++) {
        cin >> name;
        name_to_num[name] = i;
        num_to_name[i] = name;
    }

    string S;

    for (int i = 0; i < M; i++) {
        cin >> S;
        if (isdigit(S[0])) {
            int num = stoi(S);
            cout << num_to_name[num] << '\n';
        }
        else {
            cout << name_to_num[S] << '\n';
        }
    }


    return 0;
}
