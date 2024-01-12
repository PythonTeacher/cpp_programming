// 3. set.cpp

// 연관 컨테이너 (Associative container)
// 1) 정의 : 이진 트리로 구성되어 미리 정의된 순서대로 정렬되어 저장됨
// 2) 종류 : map, multimap, set, multiset (multi가 붙은건 중복을 허용함)
// 3) insert로 삽입하고, erase로 삭제, find로 검색

#include <iostream>
#include <set>

using namespace std;

int main() {
    // set : map은 key-value로 이루어져 있지만, set은 값 하나만을 저장하고 있음
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

    // insert()의 결과로 pair<set<int>::iterator, bool>을 리턴함
    // insert 성공 : 1, 실패(중복) : 0
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

    // set<int>::iterator를 리턴
    auto it = s1.find(3);
    cout << *it << '\n';

    cout << s1.count(3);

    /*set<int> s = {7, 1, 5, 3};
    for (int i=1; i<=9; i++) {
        cout << "s.count(" << i << ") = " << s.count(i) << '\n';
    }*/

    return 0;
}
