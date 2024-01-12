// 팩토리얼 (계승, 차례곱, factorial) : 1부터 n까지의 연속된 자연수를 차례로 곱한 값 (n!)
// 5! = 120
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << '\n';
    return 0;
}
