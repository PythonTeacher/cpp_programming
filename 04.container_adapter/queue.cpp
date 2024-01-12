// 2. queue.cpp : 큐

// 1) 정의 : 기존 컨테이너의 기능 중 일부만을 공개하여 기능이 제한되거나 변형된 컨테이너
//          간단 명료하게 인터페이스를 제한한 컨테이너의 변형
// 2) 종류 : Stack, Queue, Priority Queue(우선순위큐)
// 3) 특징: Iterator를 지원하지 않음

#include <iostream>
#include <queue>
#include <vector>
#include <list>

using namespace std;

int main() {
    // queue : FIFO(First In First Out) 구조로 된 컨테이너
    // queue<element type, element가 저장되어 있는 컨테이너 타입>
    // int를 담는 큐 생성, default 컨테이너:deque
    queue<int> q;

    for (int i=1; i<=5; i++) {
        q.push(i);
    }
    cout << "size = " << q.size() << '\n';

    while (!q.empty()) {
        cout << q.front() << ' ' << q.back() << '\n';
        q.pop();
    }
    cout << "empty = " << q.empty() << '\n';

    // pair<int,int>를 담는 큐 생성
    queue<pair<int,int>> q1;
    q1.push(make_pair(1, 2));
    q1.push({3, 4});
    q1.emplace(5, 6);

    while (!q1.empty()) {
        auto p = q1.front();
        cout << p.first << ' ' << p.second << '\n';
        q1.pop();
    }

    // vector를 포함하는 큐 생성 (pop이 안되므로 deque로 하자)
    vector<int> v = {1, 2, 3};
    queue<int, vector<int>> qv(v);
    qv.push(4); qv.push(5);

//    while (!qv.empty()) {
//        cout << qv.front() << '\n';
//        qv.pop_front();   // vector는 pop_front() 함수가 없음
//    }

    // list를 포함하는 큐 생성
    list<int> l = {10, 20, 30};
    queue<int, list<int>> ql(l);

    while (!ql.empty()) {
        cout << ql.front() << '\n';
        ql.pop();
    }

    // deque를 포함하는 큐 생성
    deque<int> d = {100, 200, 300};
    //deque<int, deque<int>> qd(d);
    queue<int> qd(d);

    while (!qd.empty()) {
        cout << qd.front() << '\n';
        qd.pop();
    }

    return 0;
}
