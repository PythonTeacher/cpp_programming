// 2. fileio.cpp : ���� �����

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string str = "�ȳ�, �����!!";

    // ���� ���
	// ofstream : Output stream class to operate on files.
    ofstream ofs("hello.txt");  // ��� ���Ͻ�Ʈ�� ����
    ofs << str;
    ofs.close();

    // ���� �Է�
    string str2;
    ifstream ifs("hello.txt");  // �Է� ���Ͻ�Ʈ�� ����
    //ifs >> str2;
    //���� �� �Է¹ޱ�
    getline(ifs, str2);

    cout << "���� ���� : " << str2 << '\n';
    ifs.close();

    return 0;
}
