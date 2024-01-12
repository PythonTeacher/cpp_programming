// 1. helloworld.cpp : 콘솔 입출력

// C언어 : 1972년 벨 연구소의 운영체제 개발자였던 데니스 리치가 개발함
//        하드웨어 제어를 위해 어셈블리어를 사용했는데 유지보수가 어렵고 하드웨어 의존성이 커서 새로운 언어를 만듬
// C++언어 : 80년대로 접어들면서 하드웨어는 급격히 발전했으나, 소프트웨어의 발전이 하드웨어의 발전속도를 따라가지 못함
//          기능은 복잡해짐에 따라 소프트웨어의 복잡도가 커졌는데, 기존의 절차지향 언어로서는 확장하기가 쉽지 않았음
//          이러한 소프트웨어 위기를 해결하기 위해 객체지향이라는 새로운 개발 패러다임이 나옴
//          1983년 벨 연구소의 비얀 스트로스트룹은 C 문법은 거의 유지하면서 객체지향 문법을 접목한 C++을 개발함.
//          C++의 첫번째 공식 표준은 C++98 -> 2011년도에 두번째 major revision인 C++11을 발표
//          2014년도에 minor revision인 C++14를 발표하였고, 세번째 공식 major revision은 2017년도 예정임.

// 현재 기준 major 공식 표준은 C++11이므로, Settings -> Compiler -> C++11 체크하기

// 표준입출력을 위한 헤더파일 선언 (.h 생략)
#include <iostream>

//int main() {
//    라이브러리이름 ::(범위지정자)
//    cout : an object of class ostream
//    std::cout << "Hello, World!" << std::endl;
//    int i;
//    cin : an object of class istream
//    std::cin >> i;
//    std::cout << "입력값 : " << i << std::endl;
//    return 0;
//}

// 네임스페이스 : std 표준라이브러리에 있는 내용들을 사용하겠다!
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int i, j;
    cin >> i >> j;      // C++에서는 데이터 입출력 시 별도의 포맷 지정이 필요 없음 (빠른 속도를 요하는 프로그램에서는 printf, scanf를 쓰기도 함)
    cout << i << '+' << j << '=' << i + j << endl;

    // endl : 줄바꿈 출력, 스트림을 flush시키므로 느림
    // cout << i << endl; << cout << i << '\n'; 약 100배 차이남
    // 가장 빠른 건 printf("%d\n", i);

    // cin, cout을 쓰면서 아래 문장을 쓰면 속도가 빨라짐
    // ios_base::sync_with_stdio(false);

    return 0;
}
