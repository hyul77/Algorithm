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



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int N;
    cin >> N;

    vector<int> list(N);
    for (int i = 0; i < N; i++) {
        cin >> list[i];
    }
    vector<int> sort_list = list;
    sort(sort_list.begin(), sort_list.end());
    sort_list.erase(unique(sort_list.begin(), sort_list.end()), sort_list.end());

    unordered_map<int, int> compressed_map;

    for (int i = 0; i < sort_list.size(); i++) {
        compressed_map[sort_list[i]] = i;
    }


    for (int i = 0; i < N; i++) {
        cout << compressed_map[list[i]] << " ";
    }
    cout << "\n";
    

    return 0;
}