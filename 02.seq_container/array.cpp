// 4. array.cpp

// 1. ���� �����̳�
// 1) ���� : �������� ���ӵ� ������ �����Ͱ� ����ǰ� �����Ǵ� �����̳�
// 2) ���� : vector, deque, list, array, forward_list

#include <iostream>
#include <array>

using namespace std;

int main() {
    // array : ���� �Ҵ� ���, ���� ���� �� ������ ������ ������ŭ �޸𸮸� �Ҵ���
    // int���� ���ҷ� ���� ���̰� 10�� array
    array<int, 10> a = {1, 2, 3};

    auto print_array = [](array<int, 10> &a) {
        for (int &x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    };
    print_array(a);

    a.fill(5);
    print_array(a);

    return 0;
}
