// 1463 : 1�� �����
// 2 : 2->1 (1��)
// 10 : 10->9->3->1 (3��)

// ��ȭ�� �����
// 1) D[n] = n�� 1�� ����µ� �ʿ��� ������ �ּҰ�
// 2) n�� 3���� ������ �������� ��, 3���� ������ ��� : D[n/3]+1
// 3) n�� 2���� ������ �������� ��, 2���� ������ ��� : D[n/2]+1
// 4) n���� 1�� ���� ��� : D[n-1]+1
// ��ȭ�� : D[n] = min(2, 3, 4)
#include <iostream>

using namespace std;

int d[1000001];

// Top-down ���
int solve(int n) {
    //cout << "n:" << n << '\n';
    if (n == 1) return 0;
    if (d[n] > 0) return d[n];  // �޸������̼�

    d[n] = solve(n-1) + 1;
    if (n%2 == 0) {
        int temp = solve(n/2) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    if (n%3 == 0) {
        int temp = solve(n/3) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    return d[n];
}

// Bottom-up ���
int solve2(int n) {
    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    return d[n];
}

int main() {
    int n;
    cin >> n;
    cout << solve2(n) << '\n';
    return 0;
}
