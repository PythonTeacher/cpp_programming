// 4. auto.cpp : C++11에서 새롭게 추가된 auto 키워드
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // C++11부터 컴파일러가 자료형을 자동으로 결정하는 auto 키워드가 제공됨
    // 컴파일러가 초기값을 보고 자료형을 결정하므로 반드시 초기화가 되어야 함
    auto a = 0, b = 0;
    cin >> a >> b;
    cout << a + b << '\n';

    vector<int> v = {1,2,3,4,5};
    // 배열과의 차이점 : 자동으로 크기가 늘어남
    v.push_back(6);
    v.push_back(7);

    for (auto i=0; i<v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';

    // iterator 사용시 편리
    for (vector<int>::iterator it=v.begin()+2; it!=v.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';

    for (auto it=v.begin()+2; it!=v.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';

    return 0;
}
