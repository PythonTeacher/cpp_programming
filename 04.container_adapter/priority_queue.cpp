// 3. priority_queue.cpp : �켱���� ť

// 1) ���� : ���� �����̳��� ��� �� �Ϻθ��� �����Ͽ� ����� ���ѵǰų� ������ �����̳�
//          ���� ����ϰ� �������̽��� ������ �����̳��� ����
// 2) ���� : Stack, Queue, Priority Queue(�켱����ť)
// 3) Ư¡: Iterator�� �������� ����

#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
    // priority_queue : queue�� �켱���� ����� �߰���
    // ��������, �������� ���� ����� �� queue
    priority_queue<int> q;

    q.push(3);  q.push(1);  q.push(5);
    cout << "size = " << q.size() << '\n';

    // ����Ʈ : �������� ����
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

    // �������� ����� �Ϸ���?
    priority_queue<int> q2;
    for (int x : a) {
        q2.push(-x);        // -5 -2 -4 -1 -3 -> -1 -2 -3 -4 -5
    }
    while (!q2.empty()) {
        cout << -q2.top() << ' ';   // 1 2 3 4 5
        q2.pop();
    }
    cout << '\n';

    // �������� ����2
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
