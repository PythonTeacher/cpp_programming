// 1. map.cpp

// 순차 컨테이너 (Sequence container) : 삽입된 순서대로 등록됨

// 연관 컨테이너 (Associative container)
// 1) 정의 : 이진 트리로 구성되어 미리 정의된 순서대로 정렬되어 저장됨
// 2) 종류 : map, multimap, set, multiset (multi가 붙은건 중복을 허용함)
//  - unordered_map : map 순서가 지정되지 않음
//  - unordered_set : set 순서가 지정되지 않음
// 3) insert로 삽입하고, erase로 삭제, find로 검색

#include <iostream>
#include <map>

using namespace std;

int main() {
    // map 연관 컨테이너는 key-value 쌍으로 구성되어 있음
    // map<key 타입, value 타입>
    map<int, int> m1;
    // pair 형태로 초기화
    map<int, int> m2 = {{5, 6}, {1, 2}, {3, 4}};
    cout << m1.size() << '\n';
    cout << m2.size() << '\n';

    m1[10] = 20;
    cout << m1[10] << '\n';

    // 키 값이 중복될 경우
    m1[10] = 30;
    cout << m1[10] << '\n';

    // iterator 사용하기
    for (auto it = m2.begin(); it != m2.end(); it++) {
        cout << (it->first) << ' ' << (it->second) << '\n';
    }

    auto print_map = [](map<int,int> &m) {
        for (auto &x : m) {
            cout << x.first << ' ' << x.second << '\n';
        }
    };

    // pair 형태로 추가
    m2.insert({10, 20});
    print_map(m2);

    m2.insert(make_pair(100, 200));
    print_map(m2);

    auto p = pair<int,int>(1000, 2000);
    m2.insert(p);
    print_map(m2);

    // erase()로 삭제
    m2.erase(100);
    print_map(m2);

    // find()로 검색
    auto i = m2.find(10);
    cout << i->first << ' ' << i->second << '\n';

    // 10, 20, 30, 40 순서로 출력하기
    auto p2 = make_pair(make_pair(10,20), make_pair(30,40));
    cout << p2.first.first << ' ' << p2.first.second << ' ';
    cout << p2.second.first << ' ' << p2.second.second << '\n';

    return 0;
}
