// 4. multiset.cpp

// ���� �����̳� (Associative container)
// 1) ���� : ���� Ʈ���� �����Ǿ� ����ȴ�.
// 2) ���� : map, multimap, set, multiset (multi�� ������ �ߺ��� �����)
// 3) insert�� �����ϰ�, erase�� ����, find�� �˻�

#include <iostream>
#include <set>

using namespace std;

int main() {
    // multiset : set�� ��ɿ� �� �ߺ��� ����ϴ� ���� �����̳��̴�.
    multiset<int> ms = {1, 2, 3, 1, 2};

    cout << "ms.size() = " << ms.size() << '\n';

    ms.insert(1); ms.insert(3);

    /*for (auto it = ms.begin(); it != ms.end(); it++) {	
        cout << *it << ' ';
    }*/
    for (int x : ms) {
        cout << x << ' ';
    }
    cout << '\n';
    cout << "1�� ���� : " << ms.count(1) << '\n';

    return 0;
}
