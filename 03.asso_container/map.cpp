// 1. map.cpp

// ���� �����̳� (Sequence container) : ���Ե� ������� ��ϵ�

// ���� �����̳� (Associative container)
// 1) ���� : ���� Ʈ���� �����Ǿ� �̸� ���ǵ� ������� ���ĵǾ� �����
// 2) ���� : map, multimap, set, multiset (multi�� ������ �ߺ��� �����)
//  - unordered_map : map ������ �������� ����
//  - unordered_set : set ������ �������� ����
// 3) insert�� �����ϰ�, erase�� ����, find�� �˻�

#include <iostream>
#include <map>

using namespace std;

int main() {
    // map ���� �����̳ʴ� key-value ������ �����Ǿ� ����
    // map<key Ÿ��, value Ÿ��>
    map<int, int> m1;
    // pair ���·� �ʱ�ȭ
    map<int, int> m2 = {{5, 6}, {1, 2}, {3, 4}};
    cout << m1.size() << '\n';
    cout << m2.size() << '\n';

    m1[10] = 20;
    cout << m1[10] << '\n';

    // Ű ���� �ߺ��� ���
    m1[10] = 30;
    cout << m1[10] << '\n';

    // iterator ����ϱ�
    for (auto it = m2.begin(); it != m2.end(); it++) {
        cout << (it->first) << ' ' << (it->second) << '\n';
    }

    auto print_map = [](map<int,int> &m) {
        for (auto &x : m) {
            cout << x.first << ' ' << x.second << '\n';
        }
    };

    // pair ���·� �߰�
    m2.insert({10, 20});
    print_map(m2);

    m2.insert(make_pair(100, 200));
    print_map(m2);

    auto p = pair<int,int>(1000, 2000);
    m2.insert(p);
    print_map(m2);

    // erase()�� ����
    m2.erase(100);
    print_map(m2);

    // find()�� �˻�
    auto i = m2.find(10);
    cout << i->first << ' ' << i->second << '\n';

    // 10, 20, 30, 40 ������ ����ϱ�
    auto p2 = make_pair(make_pair(10,20), make_pair(30,40));
    cout << p2.first.first << ' ' << p2.first.second << ' ';
    cout << p2.second.first << ' ' << p2.second.second << '\n';

    return 0;
}
