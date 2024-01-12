// 3. priority_queue.cpp : 우선순위 큐

// 1) 정의 : 기존 컨테이너의 기능 중 일부만을 공개하여 기능이 제한되거나 변형된 컨테이너
//          간단 명료하게 인터페이스를 제한한 컨테이너의 변형
// 2) 종류 : Stack, Queue, Priority Queue(우선순위큐)
// 3) 특징: Iterator를 지원하지 않음

#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
    // priority_queue : queue에 우선순위 기능을 추가함
    // 오름차순, 내림차순 정렬 기능이 들어간 queue
    priority_queue<int> q;

    q.push(3);  q.push(1);  q.push(5);
    cout << "size = " << q.size() << '\n';

    // 디폴트 : 내림차순 정렬
    while (!q.empty()) {
        cout << q.top() << '\n';
        q.pop();
    }
    cout << "empty = " << q.empty() << '\n';

    vector<int> a = {5, 2, 4, 1, 3};
    priority_queue<int> q1;

    for (int x : a) {
        q1.push(x);
    }

    while (!q1.empty()) {
        cout << q1.top() << ' ';
        q1.pop();
    }
    cout << '\n';

    // 오름차순 출력을 하려면?
    priority_queue<int> q2;
    for (int x : a) {
        q2.push(-x);        // -5 -2 -4 -1 -3 -> -1 -2 -3 -4 -5
    }
    while (!q2.empty()) {
        cout << -q2.top() << ' ';   // 1 2 3 4 5
        q2.pop();
    }
    cout << '\n';

    // 오름차순 정렬2
    priority_queue<int, vector<int>, greater<int>> q3;
    for (int x : a) {
        q3.push(x);
    }

    while (!q3.empty()) {
        cout << q3.top() << ' ';
        q3.pop();
    }
    cout << '\n';

    return 0;
}
