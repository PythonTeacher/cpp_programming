// 1. 나머지 연산 : 컴퓨터에 저장할 수 있는 정수의 범위는 정해져 있으므로,
// 답을 특정 값으로 나눈 나머지를 출력하라는 문제가 등장한다.
// (A + B) % C = ((A % C) + (B % C)) % C
// (A * B) % C = ((A % C) * (B % C)) % C
// (A - B) % C = ((A % C) - (B % C) + C) % C

// 10430 : 나머지
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << '\n';
    cout << ((a % c) + (b % c)) % c << '\n';

    cout << (a * b) % c << '\n';
    cout << ((a % c) * (b % c)) % c << '\n';

    return 0;
}
