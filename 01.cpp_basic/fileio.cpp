// 2. fileio.cpp : 파일 입출력

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string str = "안녕, 세상아!!";

    // 파일 출력
	// ofstream : Output stream class to operate on files.
    ofstream ofs("hello.txt");  // 출력 파일스트림 생성
    ofs << str;
    ofs.close();

    // 파일 입력
    string str2;
    ifstream ifs("hello.txt");  // 입력 파일스트림 생성
    //ifs >> str2;
    //한줄 다 입력받기
    getline(ifs, str2);

    cout << "파일 내용 : " << str2 << '\n';
    ifs.close();

    return 0;
}
