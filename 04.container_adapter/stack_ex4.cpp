// 11576 : Base Conversion
#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int main() {
    // 2���� ���� �Է�
    int a, b;
    cin >> a >> b;

    // ���� ���� �Է�
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

    // ������ ��� ��Ҹ� ����
    while(!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}
