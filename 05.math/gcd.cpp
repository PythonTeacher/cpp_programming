// 2. 최대공약수 (GCD, Greatest Common Divisor)
// 두 수 A, B의 최대공약수는 A, B의 공통된 약수 중에서 가장 큰 정수
#include <iostream>
#include <algorithm>    // std::min

using namespace std;

// 1. 2부터 두 수보다 작은 수까지 모든 정수로 나누어 보기
// 8(1 2 4 8)
// 12(1 2 3 4 6 12)
int gcd(int a, int b) {
    int g = 1;
    int m = min(a, b);
    for (int i=2; i<=m; i++) {
        if (a % i == 0 && b % i == 0) {
            g = i;
        }
    }
    return g;
}

// 2. 유클리드 호제법 이용하기
// 2개의 자연수에서 최대공약수를 구하는 알고리즘의 하나로
// 명시적으로 기술된 가장 오래된 알고리즘으로서도 알려져 있음 (기원전 300년경에 쓰인 유클리드의 원론)
// 2개의 자연수 a, b에 대해서 a를 b로 나눈 나머지를 r이라 하면 (단, a>b),
// a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
// GCD(a, b) = GCD(b, r), 나머지가 0이면 그때 b가 최대공약수
// GCD(12, 8) = GCD(8, 4) = GCD(4, 0) -> 4

// 반복문 이용
int gcd2(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// 재귀함수 이용
int gcd3(int a, int b) {
	return b ? gcd3(b, a % b) : a;
}

int main() {
    int a, b;
    cin >> a >> b;

    // 최대공약수 구하기
    cout << "GCD1 : " << gcd(a, b) << '\n';
    cout << "GCD2 : " << gcd2(a, b) << '\n';
    cout << "GCD3 : " << gcd3(a, b) << '\n';

    // 최소공배수 구하기 (LCM, Least Common Multiple)
    // 두 수 A, B의 최소공배수는 A, B의 공통된 배수 중에서 가장 작은 정수
    // L*G=A*B, L=(A*B)/G
    // 단, A*B가 int의 범위를 넘어갈 수 있으므로 L=(A/G)*(B/G)*G
    int g = gcd(a, b);
    cout << "LCM : " << (a/g) * (b/g) * g << '\n';

    return 0;
}
