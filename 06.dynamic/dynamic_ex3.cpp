// 11727 : 2*n 타일링 2

// 2*0 = 1개
// 2*1 = 1개
// 2*2 = 3개
// 2*3 = 5개
// 2*4 = 11개

// 점화식 만들기
// 1) D[n] = 2*n을 채우는 방법의 수
// 점화식 : D[n] = D[n-1] + 2*D[n-2]
#include <iostream>

using namespace std;

int d[1001];

int main() {
    d[0] = 1;
    d[1] = 1;
    int n;
    cin >> n;

    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 2*d[i-2];
        //cout << d[i] << '\n';
        d[i] %= 10007;  // d[i] 값이 정수 범위를 벗어날 수 있음
    }

    cout << d[n];
    return 0;
}
