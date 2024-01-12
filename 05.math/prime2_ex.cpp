// 6588 : 골드바흐의 추측
// 골드바흐의 추측(Goldbach's conjecture)은 오래전부터 알려진 정수론의 미해결 문제로
// 2보다 큰 모든 짝수는 두 개의 소수(Prime number)의 합으로 표시할 수 있다는 것이다.
// 10^18 이하에서는 참인 것이 증명됨

#include <iostream>
#include <stdio.h>

using namespace std;

const int n = 1000000;
int prime[n];       // 소수 저장
int cnt = 0;        // 소수의 개수
bool check[n+1];    // 지워졌으면 true

int main() {

    for (int i=2; i<=n; i++) {
        if (check[i] == false) {  // 소수인 경우
            prime[cnt++] = i;
            // i*i가 정수의 범위를 벗어나는 경우에는 i*2로 하기
            for (int j = i*2; j<=n; j+=i) {
                check[j] = true;  // 지우기
            }
        }
    }

    while (true) {
        int a;
        //cin >> n;
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        for (int i = 0; i < cnt; i++) {
            if (check[a - prime[i]] == false) {
                //cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                printf("%d = %d + %d\n", a, prime[i], a - prime[i]);
                break;
            }
        }
    }

    return 0;
}
