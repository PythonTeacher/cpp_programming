// 6. lambda.cpp : C++11에서 새롭게 추가된 람다 함수
#include <iostream>
#include <functional>
#include <vector>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    cout << sum(1, 2) << '\n';

    // 람다함수(익명함수) : 코드가 간단하고 다른곳에서 쓰이지 않는 일회용 함수를
    //                  매번 정의하지 않아도 되도록 C++11에서 이름없는 함수인 lambda를 추가함
    // 형식 : [] (함수인자) {함수내용} -> []는 함수선언
    auto func = [](int x, int y) {
        return x + y;
    };
    cout << func(1, 2) << '\n';

    cout << [](int x, int y) {
        return x + y;
    } (1, 2) << '\n';

    int a = 10;
    auto is_less = [a](int num) {
        return num < a;
    };

    int b = 5;
    cout << b << "이(가) " << a << "보다 작습니까?"
         << (is_less(b) ? "네" : "아니오") << '\n';

    // 참조자 사용 가능
    // &: 모든 변수를 참조하겠다.[&a]는 a만 참조하겠다.
    // auto f = [a]() {   // 에러 : read-only 변수임
    auto f = [&a]() {
        a += 10;
    };

    cout << "a = " << a << '\n';
    f();
    cout << "a = " << a << '\n';
    f();
    cout << "a = " << a << '\n';

    // 피보나치 수열
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    // function<리턴타입(콤마로 구분한 인자의 타입들)>
    function<int(int)> fibo = [&](int n) {
        if (n <= 1) return n;
        else return fibo(n-1) + fibo(n-2);
    };

    for (int i=0; i<=10; i++) {
        cout << fibo(i) << ' ';
    }
    cout << '\n';

    // 문제) 벡터에 산술연산 람다함수 담기
    vector<function<int(int,int)>> v;
    v.push_back([](int x, int y) {
        return x + y;
    });
    v.push_back([](int x, int y) {
        return x - y;
    });
    v.push_back([](int x, int y) {
        return x * y;
    });
    v.push_back([](int x, int y) {
        return x / y;
    });
    v.push_back([](int x, int y) {
        return x % y;
    });

    for (auto f : v) {
        cout << f(10, 3) << '\n';
    }

    return 0;
}
