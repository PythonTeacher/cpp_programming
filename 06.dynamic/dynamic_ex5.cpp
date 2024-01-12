// 11052 : 붕어빵 판매하기

// 붕어빵 i개를 팔아서 얻을 수 있는 수익이 P[i]일 때,
// 붕어빵 N개를 모두 팔아서 얻을 수 있는 최대 수익은?

// 붕어빵이 4개 남아 있고,
// 1개 팔 때의 가격이 1, 2개는 5, 3개는 6, 4개는 7인 경우
// 4개를 팔아서 얻을 수 있는 최대 수익은? 10원 (2개, 2개로 묶어 팔면 됨)

// 점화식 만들기
// 1) D[n] = n개를 팔아서 얻을 수 있는 최대 수익
// 점화식 : D[n] = max(P[i] + D[n-i]), 1<=i<=n
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);

    // 메뉴 가격 저장
    for (int i=1; i<=n; i++) {
        cin >> p[i];
    }

    vector<int> d(n+1);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            d[i] = max(d[i], d[i-j] + p[j]);
        }
    }

    cout << d[n] << '\n';

    return 0;
}
