// 9012 : °ýÈ£
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    //stack<int, vector<char>> s;
    stack<int> s;
    bool flag = false;

    while (n--) {
        cin >> str;
        for (char x : str) {
            if (x == '(') {
                s.push(x);
            } else if (x == ')') {
                if (!s.empty()) {
                    s.pop();
                } else {
                    flag = true;
                    break;
                }
            }
        }
        if (s.empty() && !flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        while (!s.empty()) {
            s.pop();
        }
        flag = false;
    }

    return 0;
}
