// 2346 : 풍선 터뜨리기
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    pair<int,int> p;
    cout << p.first << ' ' << p.second << '\n';

    // 생성자
    pair<int,int> p2(10, 20);
    cout << p2.first << ' ' << p2.second << '\n';

    list<pair<int,int>> a = {{1, 2}, {3, 4}};
    a.push_back({5, 6});

    cout << a.front().first << ' ' << a.front().second << '\n';
    auto it = a.begin();
    it++;
    cout << it->first << ' ' << it->second << '\n';

    it = a.end();
    it--;
    cout << it->first << ' ' << it->second << '\n';

    a.erase(it);
    cout << a.size() << '\n';

    return 0;
}

int _main() {
    int n;
    list<pair<int,int>> a;

    cin >> n;

    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        a.push_back({i, x});
    }

    auto it = a.begin();
    for (int i=0; i<n-1; i++) {
        cout << it->first << " ";
        int step = it->second;
        auto temp = it;

        // 풍선 종이값이 양수이면 우측으로 이동
        if (step > 0) {
            // temp값 이동 후 it 삭제
            // step이 양수인 경우 이동을 먼저 하고 범위 조사
            it++;
            if (it == a.end()) {
                it = a.begin();
            }
            a.erase(temp);
            for (int i=1; i<step; i++) {
                it++;
                if (it == a.end()) {
                    it = a.begin();
                }
            }
        }
        // 풍선 종이값이 음수이면 좌측으로 이동
        else if (step < 0) {
            step = -step;
            // temp값 이동 후 it 삭제
            // step이 음수인 경우 비교를 먼저 하고 범위 조사
            if (it == a.begin()) {
                it = a.end();
            }
            it--;
            a.erase(temp);
            for (int i=1; i<step; i++) {
                if (it == a.begin()) {
                    it = a.end();
                }
                it--;
            }
        }
    }

    cout << a.front().first << '\n';

    return 0;
}
