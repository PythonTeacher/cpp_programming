// 6588 : �������� ����
// �������� ����(Goldbach's conjecture)�� ���������� �˷��� �������� ���ذ� ������
// 2���� ū ��� ¦���� �� ���� �Ҽ�(Prime number)�� ������ ǥ���� �� �ִٴ� ���̴�.
// 10^18 ���Ͽ����� ���� ���� �����

#include <iostream>
#include <stdio.h>

using namespace std;

const int n = 1000000;
int prime[n];       // �Ҽ� ����
int cnt = 0;        // �Ҽ��� ����
bool check[n+1];    // ���������� true

int main() {

    for (int i=2; i<=n; i++) {
        if (check[i] == false) {  // �Ҽ��� ���
            prime[cnt++] = i;
            // i*i�� ������ ������ ����� ��쿡�� i*2�� �ϱ�
            for (int j = i*2; j<=n; j+=i) {
                check[j] = true;  // �����
            }
        }
    }

    while (true) {
        int a;
        //cin >> n;
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        for (int i = 0; i < cnt; i++) {
            if (check[a - prime[i]] == false) {
                //cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                printf("%d = %d + %d\n", a, prime[i], a - prime[i]);
                break;
            }
        }
    }

    return 0;
}
