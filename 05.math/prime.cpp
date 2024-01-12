// 3. 소수 (Prime Number)
// 약수가 1과 자기 자신밖에 없는 수 (2, 3, 5, 7, 11, 13..)
// 즉, N이 소수가 되려면 2보다 크거나 같고, N-1보다 작거나 같은 수로 나누어 떨어지면 안됨

// 1~100까지의 소수
// 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,
// 53,59,61,67,71,73,79,83,89,97
#include <iostream>
#include <time.h>

using namespace std;

int cnt1, cnt2, cnt3;

// 알고리즘의 성능분석 방법 : 시간복잡도, 공간복잡도
// 시간복잡도 (time complexity) : 총 수행횟수, 연산의 빈도수
// 알고리즘의 시간 복잡도를 구하기 위해서는 알고리즘의 연산 차수를 구해야 함
// 연산 차수가 서로 다른 여러 개의 항목으로 표현된다면 가장 높은 연산 차수를 택한다.

// 1. 2보다 크거나 같고, n-1보다 작거나 같은 수로 나누어 떨어지면 안된다.
// ex) 24가 소수인지 비교 : 2~23까지
// 시간복잡도 : N이 1억일 때 O(N) = 1억
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

// 2. 2보다 크거나 같고, n/2보다 작거나 같은 수로 나누어 떨어지면 안된다.
// N = a * b일 경우, a의 가능한 가장 작은 값이 2이기 때문에, b는 n/2을 넘지 않는다.
// ex) 24가 소수인지 비교 : 2~12까지
// 시간복잡도 : O(N/2) = 5천만
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

// 3. 2보다 크거나 같고, 루트N 보다 작거나 같은 수로 나누어 떨어지면 안된다.
// ex) 24가 소수인지 비교 : 2~루트24까지 비교 (2~4.xx)
// i<=루트N -> 루트N값은 실수이고, 컴퓨터에서 근사값을 나타내므로 i*i<=n으로 표시
// 시간복잡도 : O(루트N) = 만
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

    // 소수 구하기
    // ex) 74207281
    start = clock(); /*현재 시각을 구한다.*/
    cout << is_prime(a) << '\n';
    end = clock(); /*현재 시각을 구한다.*/

    // Clock Tick단위를 초단위로 변환
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
