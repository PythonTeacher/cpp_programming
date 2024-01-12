// 1463 : 1로 만들기
// 2 : 2->1 (1번)
// 10 : 10->9->3->1 (3번)

// 점화식 만들기
// 1) D[n] = n을 1로 만드는데 필요한 연산의 최소값
// 2) n이 3으로 나누어 떨어졌을 때, 3으로 나누는 경우 : D[n/3]+1
// 3) n이 2으로 나누어 떨어졌을 때, 2으로 나누는 경우 : D[n/2]+1
// 4) n에서 1을 빼는 경우 : D[n-1]+1
// 점화식 : D[n] = min(2, 3, 4)
#include <iostream>

using namespace std;

int d[1000001];

// Top-down 방식
int solve(int n) {
    //cout << "n:" << n << '\n';
    if (n == 1) return 0;
    if (d[n] > 0) return d[n];  // 메모이제이션

    d[n] = solve(n-1) + 1;
    if (n%2 == 0) {
        int temp = solve(n/2) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    if (n%3 == 0) {
        int temp = solve(n/3) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    return d[n];
}

// Bottom-up 방식
int solve2(int n) {
    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    return d[n];
}

int main() {
    int n;
    cin >> n;
    cout << solve2(n) << '\n';
    return 0;
}
