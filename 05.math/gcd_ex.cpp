// 9613. GCD ��
#include <iostream>
#include <vector>

using namespace std;

// ��Ŭ���� ȣ���� �̿��ϱ�
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int t;
        cin >> t;
        vector<int> v(t);  // ���̰� t�� ����

        for (int i=0; i<t; i++)
            cin >> v[i];

        int sum=0;
        for (int i=0; i<t-1; i++)
            for (int j=i+1; j<t; j++)
                sum += gcd(v[i], v[j]);

        cout << sum << '\n';
    }

    return 0;
}
