// 2. queue.cpp : ť

// 1) ���� : ���� �����̳��� ��� �� �Ϻθ��� �����Ͽ� ����� ���ѵǰų� ������ �����̳�
//          ���� ����ϰ� �������̽��� ������ �����̳��� ����
// 2) ���� : Stack, Queue, Priority Queue(�켱����ť)
// 3) Ư¡: Iterator�� �������� ����

#include <iostream>
#include <queue>
#include <vector>
#include <list>

using namespace std;

int main() {
    // queue : FIFO(First In First Out) ������ �� �����̳�
    // queue<element type, element�� ����Ǿ� �ִ� �����̳� Ÿ��>
    // int�� ��� ť ����, default �����̳�:deque
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

    // pair<int,int>�� ��� ť ����
    queue<pair<int,int>> q1;
    q1.push(make_pair(1, 2));
    q1.push({3, 4});
    q1.emplace(5, 6);

    while (!q1.empty()) {
        auto p = q1.front();
        cout << p.first << ' ' << p.second << '\n';
        q1.pop();
    }

    // vector�� �����ϴ� ť ���� (pop�� �ȵǹǷ� deque�� ����)
    vector<int> v = {1, 2, 3};
    queue<int, vector<int>> qv(v);
    qv.push(4); qv.push(5);

//    while (!qv.empty()) {
//        cout << qv.front() << '\n';
//        qv.pop_front();   // vector�� pop_front() �Լ��� ����
//    }

    // list�� �����ϴ� ť ����
    list<int> l = {10, 20, 30};
    queue<int, list<int>> ql(l);

    while (!ql.empty()) {
        cout << ql.front() << '\n';
        ql.pop();
    }

    // deque�� �����ϴ� ť ����
    deque<int> d = {100, 200, 300};
    //deque<int, deque<int>> qd(d);
    queue<int> qd(d);

    while (!qd.empty()) {
        cout << qd.front() << '\n';
        qd.pop();
    }

    return 0;
}
