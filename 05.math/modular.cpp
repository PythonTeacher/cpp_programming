// 1. ������ ���� : ��ǻ�Ϳ� ������ �� �ִ� ������ ������ ������ �����Ƿ�,
// ���� Ư�� ������ ���� �������� ����϶�� ������ �����Ѵ�.
// (A + B) % C = ((A % C) + (B % C)) % C
// (A * B) % C = ((A % C) * (B % C)) % C
// (A - B) % C = ((A % C) - (B % C) + C) % C

// 10430 : ������
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << '\n';
    cout << ((a % c) + (b % c)) % c << '\n';

    cout << (a * b) % c << '\n';
    cout << ((a % c) * (b % c)) % c << '\n';

    return 0;
}
