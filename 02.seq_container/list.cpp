// 3. list.cpp

// 1. ���� �����̳�
// 1) ���� : �������� ���ӵ� ������ �����Ͱ� ����ǰ� �����Ǵ� �����̳�
// 2) ���� : vector, deque, list, array, forward_list

#include <iostream>
#include <list>
#include <cmath>  // �Ǵ� #include <cstdlib>

using namespace std;

int main() {
    // list : ���� ���� ����Ʈ(double linked list)�� �̷���� ���� �����̳�
    // ���� : �� �����ÿ��� �׻� ù��° ���Һ��� �����ؼ� �о�� �ϹǷ� ��ȿ������
    //       �޸𸮻� linked list ���·� ����Ǿ� �����Ƿ� �ٷ� ������ �ȵ�
    // ���� : ����, ���� �ÿ��� ��� �ð����� ������
    // �Լ� : push_back, push_front, pop_back, pop_front
    list<int> l;

    auto print_list = [](list<int> &l) {
        for (int &x : l) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    l.push_back(-10);
    print_list(l);

    l.push_back(-20);
    print_list(l);

    l.push_front(15);
    print_list(l);

    l.push_front(30);
    print_list(l);

    l.pop_back();
    print_list(l);

    l.pop_front();
    print_list(l);

    // �������� ����
    l.sort();
    print_list(l);

    // �������� ����
    l.sort(greater<int>());
    print_list(l);

    // ���밪 �������� ����
    l.sort([](int &u, int &v) {
        return abs(u) < abs(v);
    });
    print_list(l);

    l.reverse();
    print_list(l);

    return 0;
}
