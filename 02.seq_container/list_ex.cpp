// 2346 : ǳ�� �Ͷ߸���
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    pair<int,int> p;
    cout << p.first << ' ' << p.second << '\n';

    // ������
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

        // ǳ�� ���̰��� ����̸� �������� �̵�
        if (step > 0) {
            // temp�� �̵� �� it ����
            // step�� ����� ��� �̵��� ���� �ϰ� ���� ����
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
        // ǳ�� ���̰��� �����̸� �������� �̵�
        else if (step < 0) {
            step = -step;
            // temp�� �̵� �� it ����
            // step�� ������ ��� �񱳸� ���� �ϰ� ���� ����
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
