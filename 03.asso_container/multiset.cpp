// 4. multiset.cpp

// 연관 컨테이너 (Associative container)
// 1) 정의 : 이진 트리로 구성되어 저장된다.
// 2) 종류 : map, multimap, set, multiset (multi가 붙은건 중복을 허용함)
// 3) insert로 삽입하고, erase로 삭제, find로 검색

#include <iostream>
#include <set>

using namespace std;

int main() {
    // multiset : set의 기능에 값 중복을 허용하는 연관 컨테이너이다.
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
    cout << "1의 갯수 : " << ms.count(1) << '\n';

    return 0;
}
