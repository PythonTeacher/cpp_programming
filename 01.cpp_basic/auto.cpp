// 4. auto.cpp : C++11���� ���Ӱ� �߰��� auto Ű����
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // C++11���� �����Ϸ��� �ڷ����� �ڵ����� �����ϴ� auto Ű���尡 ������
    // �����Ϸ��� �ʱⰪ�� ���� �ڷ����� �����ϹǷ� �ݵ�� �ʱ�ȭ�� �Ǿ�� ��
    auto a = 0, b = 0;
    cin >> a >> b;
    cout << a + b << '\n';

    vector<int> v = {1,2,3,4,5};
    // �迭���� ������ : �ڵ����� ũ�Ⱑ �þ
    v.push_back(6);
    v.push_back(7);

    for (auto i=0; i<v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';

    // iterator ���� ��
    for (vector<int>::iterator it=v.begin()+2; it!=v.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';

    for (auto it=v.begin()+2; it!=v.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';

    return 0;
}
