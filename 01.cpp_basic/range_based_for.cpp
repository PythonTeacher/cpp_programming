// 5. range_based_for.cpp : C++11에서 새롭게 추가된 Range-based for Loop
#include <iostream>
#include <vector>

using namespace std;

// Range-based for Loop (범위기반 for문)
int main() {
    vector<int> v = {1,2,3,4,5};
    int sum = 0;

    // 참조자 : 변수명 앞에 &를 붙임
    for (auto &i : v) {
        //i = 1;
        sum += i;
    }
    cout << sum << '\n';

    //char str[] = "dimigo";
    string str = "dimigo";
    for (auto &x : str) {
        cout << x << '\n';
    }

    return 0;
}
