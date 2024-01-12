// 2. �ִ����� (GCD, Greatest Common Divisor)
// �� �� A, B�� �ִ������� A, B�� ����� ��� �߿��� ���� ū ����
#include <iostream>
#include <algorithm>    // std::min

using namespace std;

// 1. 2���� �� ������ ���� ������ ��� ������ ������ ����
// 8(1 2 4 8)
// 12(1 2 3 4 6 12)
int gcd(int a, int b) {
    int g = 1;
    int m = min(a, b);
    for (int i=2; i<=m; i++) {
        if (a % i == 0 && b % i == 0) {
            g = i;
        }
    }
    return g;
}

// 2. ��Ŭ���� ȣ���� �̿��ϱ�
// 2���� �ڿ������� �ִ������� ���ϴ� �˰����� �ϳ���
// ��������� ����� ���� ������ �˰������μ��� �˷��� ���� (����� 300��濡 ���� ��Ŭ������ ����)
// 2���� �ڿ��� a, b�� ���ؼ� a�� b�� ���� �������� r�̶� �ϸ� (��, a>b),
// a�� b�� �ִ������� b�� r�� �ִ������� ����.
// GCD(a, b) = GCD(b, r), �������� 0�̸� �׶� b�� �ִ�����
// GCD(12, 8) = GCD(8, 4) = GCD(4, 0) -> 4

// �ݺ��� �̿�
int gcd2(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// ����Լ� �̿�
int gcd3(int a, int b) {
	return b ? gcd3(b, a % b) : a;
}

int main() {
    int a, b;
    cin >> a >> b;

    // �ִ����� ���ϱ�
    cout << "GCD1 : " << gcd(a, b) << '\n';
    cout << "GCD2 : " << gcd2(a, b) << '\n';
    cout << "GCD3 : " << gcd3(a, b) << '\n';

    // �ּҰ���� ���ϱ� (LCM, Least Common Multiple)
    // �� �� A, B�� �ּҰ������ A, B�� ����� ��� �߿��� ���� ���� ����
    // L*G=A*B, L=(A*B)/G
    // ��, A*B�� int�� ������ �Ѿ �� �����Ƿ� L=(A/G)*(B/G)*G
    int g = gcd(a, b);
    cout << "LCM : " << (a/g) * (b/g) * g << '\n';

    return 0;
}
