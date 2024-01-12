// 2. deque.cpp

// 1. 순차 컨테이너
// 1) 정의 : 논리적으로 연속된 공간에 데이터가 저장되고 관리되는 컨테이너
// 2) 종류 : vector, deque, list, array, forward_list

#include <iostream>
#include <deque>

using namespace std;

int main() {
    // deque(덱, 데크) : double ended queue의 약자로 vector와는 다르게
    //                 원소를 앞, 뒤로 모두 추가할 수 있는 컨테이너임
    // vector : push_back, pop_back
    // 함수 : push_back, push_front, pop_back, pop_front
    deque<int> d;

    auto print_deque = [](deque<int> &d) {
        for (int &x : d) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    d.push_back(1);
    print_deque(d);

    d.push_front(2);
    print_deque(d);

    d.push_front(3);
    print_deque(d);

    d.pop_back();
    print_deque(d);

    d.pop_front();
    print_deque(d);

    return 0;
}
