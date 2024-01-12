// 2. multimap.cpp

// 연관 컨테이너 (Associative container)
// 1) 정의 : 이진 트리로 구성되어 저장된다.
// 2) 종류 : map, multimap, set, multiset (multi가 붙은건 중복을 허용함)
// 3) insert로 삽입하고, erase로 삭제, find로 검색

#include <iostream>
#include <map>

using namespace std;

int main() {
    // multimap : map과 달리 key값 중복을 허용한다.
    // map은 key가 unique하므로 find()로 특정 key값을 찾았으나,
    // multimap에서는 lower_bound(), upper_bound(), equal_range()를 통해
    // 특정 key값을 갖는 multimap을 찾을 수 있다.

    multimap<int, int> mm = {{1, 2}, {3, 4}, {5, 6}};
    mm.insert(make_pair(1, 10));
    mm.insert(make_pair(1, 100));

    // iterator 사용하기
    for (auto it = mm.begin(); it != mm.end(); it++) {
        cout << (it->first) << ' ' << (it->second) << '\n';
    }

    // find()로 검색하면 첫번째 pair가 나옴
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
