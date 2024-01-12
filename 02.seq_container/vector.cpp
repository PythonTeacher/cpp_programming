// 1. vector.cpp

// STL : Standard Template Library
// C++에서 자주 사용하는 기능을 미리 만들어 제공하는 표준 라이브러리
// 반복 사용되는 기능에 대하여 재사용성과 성능을 고려하여 설계되어 있으므로
// STL에서 제공하는 기능에 대해서는 자체 라이브러리를 구현할 필요가 없다.
// STL의 사용법을 익혀보자.

// 1. 순차 컨테이너
// 1) 정의 : 논리적으로 연속된 공간에 데이터가 저장되고 관리되는 컨테이너
// 2) 종류 : vector, deque, list, array, forward_list
// array는 동적 할당을 지원하지 않는 컨테이너임

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // vector : 벡터는 길이를 변경할 수 있는 배열임
    // vector<int>가 하나의 타입임
    // 함수 : push_back, pop_back
    vector<int> v1;     // 길이가 0인 백터
    vector<int> v2(10); // 길이가 10인 벡터
    vector<int> v3(15, 1);  // 길이가 15이고, 초기값이 1인 벡터
    vector<int> v4 = {1, 2, 3, 4, 5};   // 길이가 5이고, 초기값이 1,2,3,4,5인 벡터

    cout << v1.size() << '\n';
    cout << v2.size() << '\n';
    cout << v3.size() << '\n';
    cout << v4.size() << '\n';

    // 원소값 참조하기
    cout << v4[0] << '\n';
    cout << v4.at(0) << '\n';
// at() : 메모리 scope를 관리함
//    cout << v4[5] << '\n';
//    cout << v4.at(5) << '\n';

    // 특정 원소값을 바꾸려면?
    v4[2] = 10;

    cout << "front = " << v4.front() << '\n';
    cout << "back = " << v4.back() << '\n';

    auto print_vector = [](vector<int> &v) {
        for (int &x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    };

    // push_back() : 연속된 메모리를 할당받은 뒤 가장 뒤에 원소를 추가하는 함수
    v4.push_back(6); // [1, 2, 3, 4, 5, 6]
    v4.push_back(7); // [1, 2, 3, 4, 5, 6, 7]
    print_vector(v4);

    // pop_back() : 가장 마지막의 원소를 벡터에서 제거함
    v4.pop_back(); // [1, 2, 3, 4, 5, 6]
    v4.pop_back(); // [1, 2, 3, 4, 5]
    v4.pop_back(); // [1, 2, 3, 4]
    print_vector(v4);

    v4.clear(); // []
    print_vector(v4);
    cout << "size = " << v4.size() << '\n';
    cout << "empty = " << v4.empty() << '\n';

    v4.resize(5); // [0, 0, 0, 0, 0]
    print_vector(v4);

    // iterator 사용하기
    vector<int> a = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    //for (auto it = a.begin(); it != a.end(); it++) {
        cout << "a[" << (it - a.begin()) << "] = " << *it << '\n';
    }

    // iterator를 사용하여 배열 값을 1, 2, 30, 40, 50으로 바꾸기
    for (auto it = a.begin()+2; it != a.end(); it++) {
        *it *= 10;
    }
    print_vector(a);

    auto it = a.begin();
    a.insert(it, 100);
    print_vector(a);

    a.erase(a.begin()+2);
    print_vector(a);

    // [begin, end)
    a.erase(a.begin()+1, a.begin()+3);
    print_vector(a);

    return 0;
}
