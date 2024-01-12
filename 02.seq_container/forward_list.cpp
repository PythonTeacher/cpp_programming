// 5. forward_list.cpp

// 1. 순차 컨테이너
// 1) 정의 : 논리적으로 연속된 공간에 데이터가 저장되고 관리되는 컨테이너
// 2) 종류 : vector, deque, list, array, forward_list

#include <iostream>
#include <forward_list>
#include <cmath>

using namespace std;

int main() {
    // forward_list : C++11에서 새로 추가된 컨테이너
    // list와는 다르게 단일 연결 리스트(single linked list)로 구성된 컨테이너임
    // 함수 : push_front, pop_front
    forward_list<int> fl;

    auto print_flist = [](forward_list<int> &fl) {
        for (int &x : fl) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    //fl.push_back(10);
    fl.push_front(-10);
    fl.push_front(-20);
    fl.push_front(15);
    fl.push_front(30);
    fl.push_front(40);
    print_flist(fl);

    fl.pop_front();
    print_flist(fl);

    // 오름차순 정렬
    fl.sort();
    print_flist(fl);

    // 내림차순 정렬
    fl.sort(greater<int>());
    print_flist(fl);

    // 절대값 오름차순 정렬
    fl.sort([](int &u, int &v) {
        return abs(u) < abs(v);
    });
    print_flist(fl);

    fl.reverse();
    print_flist(fl);

    return 0;
}
