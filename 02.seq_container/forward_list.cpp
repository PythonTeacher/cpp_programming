// 5. forward_list.cpp

// 1. ���� �����̳�
// 1) ���� : �������� ���ӵ� ������ �����Ͱ� ����ǰ� �����Ǵ� �����̳�
// 2) ���� : vector, deque, list, array, forward_list

#include <iostream>
#include <forward_list>
#include <cmath>

using namespace std;

int main() {
    // forward_list : C++11���� ���� �߰��� �����̳�
    // list�ʹ� �ٸ��� ���� ���� ����Ʈ(single linked list)�� ������ �����̳���
    // �Լ� : push_front, pop_front
    forward_list<int> fl;

    auto print_flist = [](forward_list<int> &fl) {
        for (int &x : fl) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    //fl.push_back(10);
    fl.push_front(-10);
    fl.push_front(-20);
    fl.push_front(15);
    fl.push_front(30);
    fl.push_front(40);
    print_flist(fl);

    fl.pop_front();
    print_flist(fl);

    // �������� ����
    fl.sort();
    print_flist(fl);

    // �������� ����
    fl.sort(greater<int>());
    print_flist(fl);

    // ���밪 �������� ����
    fl.sort([](int &u, int &v) {
        return abs(u) < abs(v);
    });
    print_flist(fl);

    fl.reverse();
    print_flist(fl);

    return 0;
}
