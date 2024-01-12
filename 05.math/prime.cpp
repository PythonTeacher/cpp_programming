// 3. �Ҽ� (Prime Number)
// ����� 1�� �ڱ� �ڽŹۿ� ���� �� (2, 3, 5, 7, 11, 13..)
// ��, N�� �Ҽ��� �Ƿ��� 2���� ũ�ų� ����, N-1���� �۰ų� ���� ���� ������ �������� �ȵ�

// 1~100������ �Ҽ�
// 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,
// 53,59,61,67,71,73,79,83,89,97
#include <iostream>
#include <time.h>

using namespace std;

int cnt1, cnt2, cnt3;

// �˰����� ���ɺм� ��� : �ð����⵵, �������⵵
// �ð����⵵ (time complexity) : �� ����Ƚ��, ������ �󵵼�
// �˰����� �ð� ���⵵�� ���ϱ� ���ؼ��� �˰����� ���� ������ ���ؾ� ��
// ���� ������ ���� �ٸ� ���� ���� �׸����� ǥ���ȴٸ� ���� ���� ���� ������ ���Ѵ�.

// 1. 2���� ũ�ų� ����, n-1���� �۰ų� ���� ���� ������ �������� �ȵȴ�.
// ex) 24�� �Ҽ����� �� : 2~23����
// �ð����⵵ : N�� 1���� �� O(N) = 1��
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i<=n-1; i++) {
        cnt1++;
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 2. 2���� ũ�ų� ����, n/2���� �۰ų� ���� ���� ������ �������� �ȵȴ�.
// N = a * b�� ���, a�� ������ ���� ���� ���� 2�̱� ������, b�� n/2�� ���� �ʴ´�.
// ex) 24�� �Ҽ����� �� : 2~12����
// �ð����⵵ : O(N/2) = 5õ��
bool is_prime2(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i<=n/2; i++) {
        cnt2++;
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 3. 2���� ũ�ų� ����, ��ƮN ���� �۰ų� ���� ���� ������ �������� �ȵȴ�.
// ex) 24�� �Ҽ����� �� : 2~��Ʈ24���� �� (2~4.xx)
// i<=��ƮN -> ��ƮN���� �Ǽ��̰�, ��ǻ�Ϳ��� �ٻ簪�� ��Ÿ���Ƿ� i*i<=n���� ǥ��
// �ð����⵵ : O(��ƮN) = ��
bool is_prime3(int n) {
    if (n < 2) {
        return false;
    }
    for (int i=2; i*i<=n; i++) {
        cnt3++;
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    cin >> a;
    clock_t start, end;

    // �Ҽ� ���ϱ�
    // ex) 74207281
    start = clock(); /*���� �ð��� ���Ѵ�.*/
    cout << is_prime(a) << '\n';
    end = clock(); /*���� �ð��� ���Ѵ�.*/

    // Clock Tick������ �ʴ����� ��ȯ
    double exeTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "time1 : " << exeTime << '\n';

    start = clock();
    cout << is_prime2(a) << '\n';
    end = clock();
    exeTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "time2 : " << exeTime << '\n';

    start = clock();
    cout << is_prime3(a) << '\n';
    end = clock();
    exeTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout << "time3 : " << exeTime << '\n';

    cout << cnt1 << '\n';
    cout << cnt2 << '\n';
    cout << cnt3 << '\n';

    return 0;
}
