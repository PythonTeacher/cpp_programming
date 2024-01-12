// 11052 : �ؾ �Ǹ��ϱ�

// �ؾ i���� �ȾƼ� ���� �� �ִ� ������ P[i]�� ��,
// �ؾ N���� ��� �ȾƼ� ���� �� �ִ� �ִ� ������?

// �ؾ�� 4�� ���� �ְ�,
// 1�� �� ���� ������ 1, 2���� 5, 3���� 6, 4���� 7�� ���
// 4���� �ȾƼ� ���� �� �ִ� �ִ� ������? 10�� (2��, 2���� ���� �ȸ� ��)

// ��ȭ�� �����
// 1) D[n] = n���� �ȾƼ� ���� �� �ִ� �ִ� ����
// ��ȭ�� : D[n] = max(P[i] + D[n-i]), 1<=i<=n
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);

    // �޴� ���� ����
    for (int i=1; i<=n; i++) {
        cin >> p[i];
    }

    vector<int> d(n+1);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            d[i] = max(d[i], d[i-j] + p[j]);
        }
    }

    cout << d[n] << '\n';

    return 0;
}
