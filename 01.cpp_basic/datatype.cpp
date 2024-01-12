// 3. datatype.cpp : �ڷ���
// ������ : short > int > long > long long
// �Ǽ��� : float > double > long double
// ���� : bool
// ������ : char
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // ����ũ��� �ü���� CPU�� ���� �޶����Ƿ�
    // C++ ǥ�ع��������� �ּ� ũ�⸦ ����ϰ� ����
    // �ٺ��� : Settings > Editor > Keyboard shortcuts >
    //         Edit > Special commands > Line > Duplicate > New �߰� : Ctrl+Down
    cout << sizeof(short) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(long) << '\n';
    cout << sizeof(long long) << '\n';

    cout << sizeof(float) << '\n';
    cout << sizeof(double) << '\n';
    cout << sizeof(long double) << '\n';

    cout << sizeof(bool) << '\n';
    cout << sizeof(char) << '\n';

    // ���� : bool
    bool flag = false;
    cout << (flag ? "��" : "����") << '\n';

    int a = 2147483648;         // -2147483648~2147483647 (32bit)
    cout << a << '\n';

    // unsigned int�� ���
    unsigned int b = 2147483648;    // 0~4294967295
    cout << b << '\n';

    // long long���� ���
    long long c = 2147483648;   // 64bit
    cout << c << '\n';

    long double f = 1.1234567890;
    // �Ҽ��� �տ� �ڸ� ���� 5�ڸ� ���
    cout << setprecision(5) << f << '\n';
    cout << setprecision(8) << f << '\n';
    cout << setprecision(10) << f << '\n';
    // fixed : �Ҽ��� �ڸ��� ����, fixed ���ķ� ���� �����
    cout << fixed;
    cout << setprecision(5) << f << '\n';
    cout << setprecision(8) << f << '\n';
    cout << setprecision(10) << f << '\n';

    return 0;
}
