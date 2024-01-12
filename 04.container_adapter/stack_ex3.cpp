// 10799 : ¼è¸·´ë±â
#include <iostream>
#include <stack>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.size();

    stack<int> s;
    int cnt = 0;

    for (int i=0; i<n; i++) {
        if (a[i] == '(') {
            s.push(i);
        } else {
            if (s.top() + 1 == i) {
                s.pop();
                cnt += s.size();
            } else {
                s.pop();
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}
