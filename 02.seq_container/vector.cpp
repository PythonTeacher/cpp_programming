// 1. vector.cpp

// STL : Standard Template Library
// C++���� ���� ����ϴ� ����� �̸� ����� �����ϴ� ǥ�� ���̺귯��
// �ݺ� ���Ǵ� ��ɿ� ���Ͽ� ���뼺�� ������ ����Ͽ� ����Ǿ� �����Ƿ�
// STL���� �����ϴ� ��ɿ� ���ؼ��� ��ü ���̺귯���� ������ �ʿ䰡 ����.
// STL�� ������ ��������.

// 1. ���� �����̳�
// 1) ���� : �������� ���ӵ� ������ �����Ͱ� ����ǰ� �����Ǵ� �����̳�
// 2) ���� : vector, deque, list, array, forward_list
// array�� ���� �Ҵ��� �������� �ʴ� �����̳���

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // vector : ���ʹ� ���̸� ������ �� �ִ� �迭��
    // vector<int>�� �ϳ��� Ÿ����
    // �Լ� : push_back, pop_back
    vector<int> v1;     // ���̰� 0�� ����
    vector<int> v2(10); // ���̰� 10�� ����
    vector<int> v3(15, 1);  // ���̰� 15�̰�, �ʱⰪ�� 1�� ����
    vector<int> v4 = {1, 2, 3, 4, 5};   // ���̰� 5�̰�, �ʱⰪ�� 1,2,3,4,5�� ����

    cout << v1.size() << '\n';
    cout << v2.size() << '\n';
    cout << v3.size() << '\n';
    cout << v4.size() << '\n';

    // ���Ұ� �����ϱ�
    cout << v4[0] << '\n';
    cout << v4.at(0) << '\n';
// at() : �޸� scope�� ������
//    cout << v4[5] << '\n';
//    cout << v4.at(5) << '\n';

    // Ư�� ���Ұ��� �ٲٷ���?
    v4[2] = 10;

    cout << "front = " << v4.front() << '\n';
    cout << "back = " << v4.back() << '\n';

    auto print_vector = [](vector<int> &v) {
        for (int &x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    // push_back() : ���ӵ� �޸𸮸� �Ҵ���� �� ���� �ڿ� ���Ҹ� �߰��ϴ� �Լ�
    v4.push_back(6); // [1, 2, 3, 4, 5, 6]
    v4.push_back(7); // [1, 2, 3, 4, 5, 6, 7]
    print_vector(v4);

    // pop_back() : ���� �������� ���Ҹ� ���Ϳ��� ������
    v4.pop_back(); // [1, 2, 3, 4, 5, 6]
    v4.pop_back(); // [1, 2, 3, 4, 5]
    v4.pop_back(); // [1, 2, 3, 4]
    print_vector(v4);

    v4.clear(); // []
    print_vector(v4);
    cout << "size = " << v4.size() << '\n';
    cout << "empty = " << v4.empty() << '\n';

    v4.resize(5); // [0, 0, 0, 0, 0]
    print_vector(v4);

    // iterator ����ϱ�
    vector<int> a = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    //for (auto it = a.begin(); it != a.end(); it++) {
        cout << "a[" << (it - a.begin()) << "] = " << *it << '\n';
    }

    // iterator�� ����Ͽ� �迭 ���� 1, 2, 30, 40, 50���� �ٲٱ�
    for (auto it = a.begin()+2; it != a.end(); it++) {
        *it *= 10;
    }
    print_vector(a);

    auto it = a.begin();
    a.insert(it, 100);
    print_vector(a);

    a.erase(a.begin()+2);
    print_vector(a);

    // [begin, end)
    a.erase(a.begin()+1, a.begin()+3);
    print_vector(a);

    return 0;
}
