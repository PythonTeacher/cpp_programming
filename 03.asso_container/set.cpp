// 3. set.cpp

// ���� �����̳� (Associative container)
// 1) ���� : ���� Ʈ���� �����Ǿ� �̸� ���ǵ� ������� ���ĵǾ� �����
// 2) ���� : map, multimap, set, multiset (multi�� ������ �ߺ��� �����)
// 3) insert�� �����ϰ�, erase�� ����, find�� �˻�

#include <iostream>
#include <set>

using namespace std;

int main() {
    // set : map�� key-value�� �̷���� ������, set�� �� �ϳ����� �����ϰ� ����
    set<int> s1;
    set<int> s2 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3};

    cout << "s1.size() = " << s1.size() << '\n';
    cout << "s2.size() = " << s2.size() << '\n';

    s1.insert(1); s1.insert(3); s1.insert(2);

    for (int x : s1) {
        cout << x << ' ';
    }
    cout << '\n';

    /*for (auto it = s1.begin(); it != s1.end(); it++) {
        cout << *it << ' ';
    }*/

    // insert()�� ����� pair<set<int>::iterator, bool>�� ������
    // insert ���� : 1, ����(�ߺ�) : 0
    auto r1 = s1.insert(4);
    cout << "r1 iterator = " << *r1.first << '\n';
    cout << "r1 bool = " << r1.second << '\n';

    auto r2 = s1.insert(3);
    cout << "r2 iterator = " << *r2.first << '\n';
    cout << "r2 bool = " << r2.second << '\n';

    for (auto x : s1) {
        cout << x << ' ';
    }
    cout << '\n';

    s1.erase(2);

    for (auto x : s1) {
        cout << x << ' ';
    }
    cout << '\n';

    // set<int>::iterator�� ����
    auto it = s1.find(3);
    cout << *it << '\n';

    cout << s1.count(3);

    /*set<int> s = {7, 1, 5, 3};
    for (int i=1; i<=9; i++) {
        cout << "s.count(" << i << ") = " << s.count(i) << '\n';
    }*/

    return 0;
}
