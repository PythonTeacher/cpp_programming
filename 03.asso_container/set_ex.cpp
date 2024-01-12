// 10867 : 중복 빼고 정렬하기
#include <iostream>
#include <set>

using namespace std;

int _main() {
    set<int> s = {3, 2, 2, 3, 1};
    s.insert(4);
    for (int x: s) {
        cout << x << ' ';
    }
    return 0;
}

int main() {
    int n, t;
    set<int> s;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> t;
        s.insert(t);
    }

    for (int x : s) {
        cout << x << " ";
    }

    cout << '\n';

    return 0;
}
