#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;

    string S;
    map<int, vector<string>> list;
    for (int i = 0; i < T; i++) {
        cin >> S;
        list[S.size()].push_back(S);
    }

    for (auto& pair : list) {
        sort(pair.second.begin(), pair.second.end());
        pair.second.erase(unique(pair.second.begin(), pair.second.end()), pair.second.end());
       
        for (const auto& str : pair.second) {
            cout << str << endl;
        }
    }

    return 0;
}