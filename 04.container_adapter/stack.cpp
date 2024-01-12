// �����̳� �����
// 1) ���� : ���� �����̳��� ��� �� �Ϻθ��� �����Ͽ�
//          ����� ���ѵǰų� ������ �����̳ʸ� �ǹ���
//          ���� ����ϰ� �������̽��� �����ϴ� ���� �Ǵ� ���� �����̳��� ����
// 2) ���� : Stack, Queue, Priority Queue(�켱����ť)
// 3) Ư¡: Iterator�� �������� ����

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int main() {
    // stack : FILO(First In Last Out) ������ �� �����̳�
    // ������ ���� : push, pop, top

    // stack<element type, element ������ ���� ����� �����̳� Ÿ��>
    // stack<element type> : default �����̳ʷ� deque�� ���

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

    // pair<int,int>�� ��� ���� ����
    stack<pair<int,int>> s1;
    s1.push(make_pair(1, 2));
    s1.push({3, 4});
    s1.emplace(5, 6);

    while (!s1.empty()) {
        auto p = s1.top();
        cout << p.first << ' ' << p.second << '\n';
        s1.pop();
    }

    // stack�� �����̳ʷ� vector, deque�� ���� ���
    // vector�� �����ϴ� ���� ����
    vector<int> v = {1, 2, 3};
    stack<int, vector<int>> sv(v);
    sv.push(4); sv.push(5);

    while (!sv.empty()) {
        cout << sv.top() << '\n';
        sv.pop();
    }

    // list�� �����ϴ� ���� ����
    list<int> l = {10, 20, 30};
    stack<int, list<int>> sl(l);
    sl.push(40);    sl.push(50);

    while (!sl.empty()) {
        cout << sl.top() << '\n';
        sl.pop();
    }

    // deque�� �����ϴ� ���� ����
    deque<int> d = {100, 200, 300};
    //stack<int, deque<int>> sd(d);
    stack<int> sd(d);

    while (!sd.empty()) {
        cout << sd.top() << '\n';
        sd.pop();
    }

    return 0;
}
