// 1978 : 소수 찾기
#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    while (n--) {
        int a;
        cin >> a;

        if (is_prime(a)) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
