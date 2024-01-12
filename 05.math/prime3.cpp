// 11653 : 소인수분해
// 소인수분해 (prime factorization) : 합성수를 소수의 곱으로 나타내는 것
// N을 소인수분해 했을 때 나타날 수 있는 가장 큰 인수는 루트N임
// 2부터 루트N까지 돌면서 N을 나눌 수 없을 때까지 계속 반복하면 됨
// 12=2×2×3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=2; i*i <= n; i++) {
        while (n % i == 0) {
            cout << i << '\n';
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << '\n';
    }
    return 0;
}
