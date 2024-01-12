// 11653 : ���μ�����
// ���μ����� (prime factorization) : �ռ����� �Ҽ��� ������ ��Ÿ���� ��
// N�� ���μ����� ���� �� ��Ÿ�� �� �ִ� ���� ū �μ��� ��ƮN��
// 2���� ��ƮN���� ���鼭 N�� ���� �� ���� ������ ��� �ݺ��ϸ� ��
// 12=2��2��3
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
