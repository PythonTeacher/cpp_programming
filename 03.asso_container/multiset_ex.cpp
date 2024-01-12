// 10816 : 숫자 카드 2
#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int _main() {
    multiset<int> s = {3, 2, 2, 3, 1};
    s.insert(2);

    for (int x: s) {
        cout << x << ' ';
    }
    cout << '\n';

    cout << s.count(3) << '\n';
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    scanf("%d",&n);
    //cin >> n;

    multiset<int> s;
    while (n--) {
        int x;
        scanf("%d",&x);
        //cin >> x;
        s.insert(x);
    }

    int m;
    scanf("%d",&m);
    //cin >> m;

    while (m--) {
        int x;
        scanf("%d",&x);
        //cin >> x;
        //printf("%d ",s.count(x));
        cout << s.count(x) << ' ';
    }

    //printf("\n");

    return 0;
}
