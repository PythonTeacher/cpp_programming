// 컨테이너 어댑터
// 1) 정의 : 기존 컨테이너의 기능 중 일부만을 공개하여
//          기능이 제한되거나 변형된 컨테이너를 의미함
//          간단 명료하게 인터페이스를 제한하는 순차 또는 연관 컨테이너의 변형
// 2) 종류 : Stack, Queue, Priority Queue(우선순위큐)
// 3) 특징: Iterator를 지원하지 않음

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int main() {
    // stack : FILO(First In Last Out) 구조로 된 컨테이너
    // 스택의 동작 : push, pop, top

    // stack<element type, element 저장을 위해 사용할 컨테이너 타입>
    // stack<element type> : default 컨테이너로 deque를 사용

    stack<int> s;

    for (int i=1; i<=5; i++) {
        s.push(i);
    }
    cout << "size = " << s.size() << '\n';

    while (!s.empty()) {
        cout << s.top() << '\n';
        s.pop();
    }
    cout << "empty = " << s.empty() << '\n';

    // pair<int,int>를 담는 스택 생성
    stack<pair<int,int>> s1;
    s1.push(make_pair(1, 2));
    s1.push({3, 4});
    s1.emplace(5, 6);

    while (!s1.empty()) {
        auto p = s1.top();
        cout << p.first << ' ' << p.second << '\n';
        s1.pop();
    }

    // stack은 컨테이너로 vector, deque를 많이 사용
    // vector를 포함하는 스택 생성
    vector<int> v = {1, 2, 3};
    stack<int, vector<int>> sv(v);
    sv.push(4); sv.push(5);

    while (!sv.empty()) {
        cout << sv.top() << '\n';
        sv.pop();
    }

    // list를 포함하는 스택 생성
    list<int> l = {10, 20, 30};
    stack<int, list<int>> sl(l);
    sl.push(40);    sl.push(50);

    while (!sl.empty()) {
        cout << sl.top() << '\n';
        sl.pop();
    }

    // deque를 포함하는 스택 생성
    deque<int> d = {100, 200, 300};
    //stack<int, deque<int>> sd(d);
    stack<int> sd(d);

    while (!sd.empty()) {
        cout << sd.top() << '\n';
        sd.pop();
    }

    return 0;
}
