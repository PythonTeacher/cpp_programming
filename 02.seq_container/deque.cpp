// 2. deque.cpp

// 1. ���� �����̳�
// 1) ���� : �������� ���ӵ� ������ �����Ͱ� ����ǰ� �����Ǵ� �����̳�
// 2) ���� : vector, deque, list, array, forward_list

#include <iostream>
#include <deque>

using namespace std;

int main() {
    // deque(��, ��ũ) : double ended queue�� ���ڷ� vector�ʹ� �ٸ���
    //                 ���Ҹ� ��, �ڷ� ��� �߰��� �� �ִ� �����̳���
    // vector : push_back, pop_back
    // �Լ� : push_back, push_front, pop_back, pop_front
    deque<int> d;

    auto print_deque = [](deque<int> &d) {
        for (int &x : d) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    d.push_back(1);
    print_deque(d);

    d.push_front(2);
    print_deque(d);

    d.push_front(3);
    print_deque(d);

    d.pop_back();
    print_deque(d);

    d.pop_front();
    print_deque(d);

    return 0;
}
