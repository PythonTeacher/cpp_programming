// 10������ 2������ ��ȯ
#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;
    int n;
    cin >> n;

    // 10������ 2������ ��ȯ
    // 10 : 1010, 20 :10100
    do {
        s.push(n % 2);
        n /= 2;
    } while(n);

    // ������ ��� ��Ҹ� ����
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}
