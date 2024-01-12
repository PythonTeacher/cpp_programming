// 10815 : 숫자카드
#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    //cin >> n;

    set<int> s;
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
        printf("%d ",s.count(x));
        //cout << s.count(x) << ' ';
    }

    return 0;
}
