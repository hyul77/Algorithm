#include <iostream>
#include <string>
#include <algorithm> // reverse 함수를 사용하기 위해

using namespace std;

int main() {

    string A, B;
    cin >> A >> B;


    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());


    string result = "";


    int carry = 0;


    for (int i = 0; i < max(A.size(), B.size()); ++i) {
        int sum = carry; // 이전 자릿수에서의 carry 값

        if (i < A.size()) sum += A[i] - '0'; 
        if (i < B.size()) sum += B[i] - '0'; 

        result += to_string(sum % 10); 
        carry = sum / 10;
    }


    if (carry > 0) result += to_string(carry);


    reverse(result.begin(), result.end());
    cout << result << '\n';

    return 0;
}
