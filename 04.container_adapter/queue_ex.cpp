// �Ǻ���ġ ���� ����ϱ�
// 0 1 1 2 3 5 8 13 21 34
#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;
    int n;
    cin >> n;

    q.push(0); // �ʱ갪�� 0�� 1�� ������.
    q.push(1);

    // �Ǻ���ġ ����
    for(int i=0; i<n; i++)
    {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        q.push(temp + q.front());
    }

    return 0;
}
