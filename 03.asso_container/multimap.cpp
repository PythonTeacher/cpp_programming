// 2. multimap.cpp

// ���� �����̳� (Associative container)
// 1) ���� : ���� Ʈ���� �����Ǿ� ����ȴ�.
// 2) ���� : map, multimap, set, multiset (multi�� ������ �ߺ��� �����)
// 3) insert�� �����ϰ�, erase�� ����, find�� �˻�

#include <iostream>
#include <map>

using namespace std;

int main() {
    // multimap : map�� �޸� key�� �ߺ��� ����Ѵ�.
    // map�� key�� unique�ϹǷ� find()�� Ư�� key���� ã������,
    // multimap������ lower_bound(), upper_bound(), equal_range()�� ����
    // Ư�� key���� ���� multimap�� ã�� �� �ִ�.

    multimap<int, int> mm = {{1, 2}, {3, 4}, {5, 6}};
    mm.insert(make_pair(1, 10));
    mm.insert(make_pair(1, 100));

    // iterator ����ϱ�
    for (auto it = mm.begin(); it != mm.end(); it++) {
        cout << (it->first) << ' ' << (it->second) << '\n';
    }

    // find()�� �˻��ϸ� ù��° pair�� ����
    auto i = mm.find(1);
    cout << i->first << ' ' << i->second << '\n';

    auto low_bound = mm.lower_bound(1);
    auto up_bound = mm.upper_bound(1);

    for (auto i=low_bound; i!=up_bound; i++) {
        cout << i->first << ' ' << i->second << '\n';
    }

    auto eq_range = mm.equal_range(1);
    for (auto i=eq_range.first; i!=eq_range.second; i++) {
        cout << i->first << ' ' << i->second << '\n';
    }

    return 0;
}
