// ���丮�� (���, ���ʰ�, factorial) : 1���� n������ ���ӵ� �ڿ����� ���ʷ� ���� �� (n!)
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
