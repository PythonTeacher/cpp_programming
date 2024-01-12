// 1158 : 조세퍼스 문제
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    queue<int> a;

    for (int i=1; i<=n; i++) {
        a.push(i);
    }

    cout << '<';
    for (int i=1; i<n; i++) {
        for (int j=1; j<m; j++) {
            a.push(a.front());
            a.pop();
        }
        cout << a.front() << ", ";
        a.pop();
    }
    cout << a.front() << ">\n";

    return 0;
}
