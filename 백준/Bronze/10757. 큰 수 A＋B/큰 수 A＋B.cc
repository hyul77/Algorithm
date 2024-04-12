#include <iostream>
#include <string>
#include <algorithm> // reverse 함수를 사용하기 위해

using namespace std;

int main() {
    // 입력 받기
    string A, B;
    cin >> A >> B;

    // 문자열을 뒤집어야 덧셈을 쉽게 할 수 있습니다.
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    // 덧셈을 저장할 문자열
    string result = "";

    // 자릿수 올림을 처리하기 위한 변수
    int carry = 0;

    // A와 B의 자릿수를 더하고 carry를 고려하여 처리합니다.
    for (int i = 0; i < max(A.size(), B.size()); ++i) {
        int sum = carry; // 이전 자릿수에서의 carry 값

        if (i < A.size()) sum += A[i] - '0'; // A의 해당 자릿수의 숫자를 더합니다.
        if (i < B.size()) sum += B[i] - '0'; // B의 해당 자릿수의 숫자를 더합니다.

        result += to_string(sum % 10); // 현재 자릿수에 대한 결과를 저장합니다.
        carry = sum / 10; // 다음 자릿수에 대한 carry를 설정합니다.
    }

    // 만약 마지막 자릿수에서 올림이 발생한 경우를 고려하여 처리합니다.
    if (carry > 0) result += to_string(carry);

    // 결과를 뒤집어서 출력합니다.
    reverse(result.begin(), result.end());
    cout << result << '\n';

    return 0;
}