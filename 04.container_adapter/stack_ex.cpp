// 10진수를 2진수로 변환
#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;
    int n;
    cin >> n;

    // 10진수를 2진수로 변환
    // 10 : 1010, 20 :10100
    do {
        s.push(n % 2);
        n /= 2;
    } while(n);

    // 스택의 모든 요소를 인출
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}
