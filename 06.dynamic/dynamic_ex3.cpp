// 11727 : 2*n Ÿ�ϸ� 2

// 2*0 = 1��
// 2*1 = 1��
// 2*2 = 3��
// 2*3 = 5��
// 2*4 = 11��

// ��ȭ�� �����
// 1) D[n] = 2*n�� ä��� ����� ��
// ��ȭ�� : D[n] = D[n-1] + 2*D[n-2]
#include <iostream>

using namespace std;

int d[1001];

int main() {
    d[0] = 1;
    d[1] = 1;
    int n;
    cin >> n;

    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 2*d[i-2];
        //cout << d[i] << '\n';
        d[i] %= 10007;  // d[i] ���� ���� ������ ��� �� ����
    }

    cout << d[n];
    return 0;
}
