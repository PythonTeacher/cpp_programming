// 다이나믹 프로그래밍 (동적 계획법)
// 큰 문제를 작은 문제로 나눠서 푸는 알고리즘
// 즉, 복잡한 문제를 간단한 여러 개의 문제로 나누어 푸는 방법을 말한다.

// 다이나믹 프로그래밍에서 반복되는 문제에 대해 한번만 풀어 배열에 저장해둔다.
// 이를 Memoization(메모리제이션)이라고 한다.

#include <iostream>

using namespace std;

// 피보나치 수
// F(0)=0, F(1)=1, F(n)=F(n-1)+F(n-2) (n>=2)
// 0, 1, 1, 2, 3, 5, 8, 13, 21..
// 아래 코드의 문제점은?
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// F(5) 호출 시 F(3)이 2번, F(2)이 3번 반복 호출됨
// 처음 답을 구할 때 어딘가에 메모를 해 놓은 후, 다음번 호출 시에는
// 메모해 놓은 값을 리턴함
int memo[100];
int fibonacci2(int n) {
    if (n <= 1) {
        return n;
    } else {
        if (memo[n] > 0) {
            return memo[n];
        }
        memo[n] = fibonacci(n-1) + fibonacci(n-2);
        return memo[n];
    }
}

// 다이나믹 프로그래밍을 푸는 두가지 방법
// 1. Top-down
//   1) 큰 문제를 풀어야 한다 - fibo(n)
//   2) 문제를 작은 문제로 나눈다 - fibo(n-1), fibo(n-2)
//   3) 작은 문제를 푼다 - fibo(n-1), fibo(n-2)을 구함
//   4) 작은 문제를 풀었으니, 이제 큰 문제를 푼다 - fibo(n-1) + fibo(n-2)
// -> Top-down 방식은 재귀 호출을 이용해서 문제를 풀 수 있다.
//    위의 방식이 Top-down 방식

// 2. Bottom-up
//   1) 크기가 작은 문제부터 차례대로 푼다.
//   2) 문제의 크기를 조금씩 크게 만들면서 문제를 풀어나간다.
//   3) 작은 문제를 계속 풀어 나가면 큰 문제도 풀 수 있다.
int d[100];
int fibonacci3(int n) {
    d[0] = 0;
    d[1] = 1;
    for (int i=2; i<=n; i++) {  // 2(작은문제) ~ n(큰문제)까지
        d[i] = d[i-1] + d[i-2];
    }
    return d[n];
}

int main() {
    cout << fibonacci(5) << '\n';
    cout << fibonacci2(5) << '\n';
    cout << fibonacci3(5) << '\n';

    return 0;
}
