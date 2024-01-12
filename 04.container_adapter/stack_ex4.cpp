// 11576 : Base Conversion
#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int main() {
    // 2가지 진법 입력
    int a, b;
    cin >> a >> b;

    // 숫자 갯수 입력
    int n;
    cin >> n;

    int dec = 0;
    for (int i=0; i<n; i++) {
        int t;
        cin >> t;
        dec = dec * a + t;
    }

    stack<int> s;
    do {
        s.push(dec % b);
        dec /= b;
    } while(dec);

    // 스택의 모든 요소를 인출
    while(!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}
