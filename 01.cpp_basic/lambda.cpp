// 6. lambda.cpp : C++11���� ���Ӱ� �߰��� ���� �Լ�
#include <iostream>
#include <functional>
#include <vector>

using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    cout << sum(1, 2) << '\n';

    // �����Լ�(�͸��Լ�) : �ڵ尡 �����ϰ� �ٸ������� ������ �ʴ� ��ȸ�� �Լ���
    //                  �Ź� �������� �ʾƵ� �ǵ��� C++11���� �̸����� �Լ��� lambda�� �߰���
    // ���� : [] (�Լ�����) {�Լ�����} -> []�� �Լ�����
    auto func = [](int x, int y) {
        return x + y;
    };
    cout << func(1, 2) << '\n';

    cout << [](int x, int y) {
        return x + y;
    } (1, 2) << '\n';

    int a = 10;
    auto is_less = [a](int num) {
        return num < a;
    };

    int b = 5;
    cout << b << "��(��) " << a << "���� �۽��ϱ�?"
         << (is_less(b) ? "��" : "�ƴϿ�") << '\n';

    // ������ ��� ����
    // &: ��� ������ �����ϰڴ�.[&a]�� a�� �����ϰڴ�.
    // auto f = [a]() {   // ���� : read-only ������
    auto f = [&a]() {
        a += 10;
    };

    cout << "a = " << a << '\n';
    f();
    cout << "a = " << a << '\n';
    f();
    cout << "a = " << a << '\n';

    // �Ǻ���ġ ����
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    // function<����Ÿ��(�޸��� ������ ������ Ÿ�Ե�)>
    function<int(int)> fibo = [&](int n) {
        if (n <= 1) return n;
        else return fibo(n-1) + fibo(n-2);
    };

    for (int i=0; i<=10; i++) {
        cout << fibo(i) << ' ';
    }
    cout << '\n';

    // ����) ���Ϳ� ������� �����Լ� ���
    vector<function<int(int,int)>> v;
    v.push_back([](int x, int y) {
        return x + y;
    });
    v.push_back([](int x, int y) {
        return x - y;
    });
    v.push_back([](int x, int y) {
        return x * y;
    });
    v.push_back([](int x, int y) {
        return x / y;
    });
    v.push_back([](int x, int y) {
        return x % y;
    });

    for (auto f : v) {
        cout << f(10, 3) << '\n';
    }

    return 0;
}
