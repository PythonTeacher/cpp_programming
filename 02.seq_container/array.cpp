// 4. array.cpp

// 1. 순차 컨테이너
// 1) 정의 : 논리적으로 연속된 공간에 데이터가 저장되고 관리되는 컨테이너
// 2) 종류 : vector, deque, list, array, forward_list

#include <iostream>
#include <array>

using namespace std;

int main() {
    // array : 정적 할당 방식, 최초 생성 시 지정한 원소의 개수만큼 메모리를 할당함
    // int형을 원소로 갖는 길이가 10인 array
    array<int, 10> a = {1, 2, 3};

    auto print_array = [](array<int, 10> &a) {
        for (int &x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    };
    print_array(a);

    a.fill(5);
    print_array(a);

    return 0;
}
