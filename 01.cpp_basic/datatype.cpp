// 3. datatype.cpp : 자료형
// 정수형 : short > int > long > long long
// 실수형 : float > double > long double
// 논리형 : bool
// 문자형 : char
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 실제크기는 운영체제와 CPU에 따라 달라지므로
    // C++ 표준문서에서는 최소 크기를 명시하고 있음
    // 줄복사 : Settings > Editor > Keyboard shortcuts >
    //         Edit > Special commands > Line > Duplicate > New 추가 : Ctrl+Down
    cout << sizeof(short) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(long) << '\n';
    cout << sizeof(long long) << '\n';

    cout << sizeof(float) << '\n';
    cout << sizeof(double) << '\n';
    cout << sizeof(long double) << '\n';

    cout << sizeof(bool) << '\n';
    cout << sizeof(char) << '\n';

    // 논리형 : bool
    bool flag = false;
    cout << (flag ? "참" : "거짓") << '\n';

    int a = 2147483648;         // -2147483648~2147483647 (32bit)
    cout << a << '\n';

    // unsigned int로 담기
    unsigned int b = 2147483648;    // 0~4294967295
    cout << b << '\n';

    // long long으로 담기
    long long c = 2147483648;   // 64bit
    cout << c << '\n';

    long double f = 1.1234567890;
    // 소수점 앞에 자리 포함 5자리 출력
    cout << setprecision(5) << f << '\n';
    cout << setprecision(8) << f << '\n';
    cout << setprecision(10) << f << '\n';
    // fixed : 소수점 자리수 고정, fixed 이후로 전부 적용됨
    cout << fixed;
    cout << setprecision(5) << f << '\n';
    cout << setprecision(8) << f << '\n';
    cout << setprecision(10) << f << '\n';

    return 0;
}
