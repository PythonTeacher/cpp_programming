// 5. range_based_for.cpp : C++11���� ���Ӱ� �߰��� Range-based for Loop
#include <iostream>
#include <vector>

using namespace std;

// Range-based for Loop (������� for��)
int main() {
    vector<int> v = {1,2,3,4,5};
    int sum = 0;

    // ������ : ������ �տ� &�� ����
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
