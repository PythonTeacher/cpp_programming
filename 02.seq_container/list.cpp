// 3. list.cpp

// 1. 순차 컨테이너
// 1) 정의 : 논리적으로 연속된 공간에 데이터가 저장되고 관리되는 컨테이너
// 2) 종류 : vector, deque, list, array, forward_list

#include <iostream>
#include <list>
#include <cmath>  // 또는 #include <cstdlib>

using namespace std;

int main() {
    // list : 이중 연결 리스트(double linked list)로 이루어진 순차 컨테이너
    // 단점 : 값 참조시에는 항상 첫번째 원소부터 시작해서 읽어야 하므로 비효율적임
    //       메모리상에 linked list 형태로 연결되어 있으므로 바로 접근이 안됨
    // 장점 : 삽입, 삭제 시에는 상수 시간만에 가능함
    // 함수 : push_back, push_front, pop_back, pop_front
    list<int> l;

    auto print_list = [](list<int> &l) {
        for (int &x : l) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    l.push_back(-10);
    print_list(l);

    l.push_back(-20);
    print_list(l);

    l.push_front(15);
    print_list(l);

    l.push_front(30);
    print_list(l);

    l.pop_back();
    print_list(l);

    l.pop_front();
    print_list(l);

    // 오름차순 정렬
    l.sort();
    print_list(l);

    // 내림차순 정렬
    l.sort(greater<int>());
    print_list(l);

    // 절대값 오름차순 정렬
    l.sort([](int &u, int &v) {
        return abs(u) < abs(v);
    });
    print_list(l);

    l.reverse();
    print_list(l);

    return 0;
}
