#include <iostream>

using namespace std;

int main() {
    // 변수이름은 숫자로 선언할 수 없음
    int a;  // 선언
    a = 7;  // 대입

    int b = 3;  // 초기화

    cout 
        << "a = " << a 
        << ", b = " << b 
        << endl;

    // 변수가 메모리 상에서 어디에 저장되는지는 컴파일러가 알아서 지정
    // 변수가 어디에 저장되는지, 그 주소를 확인해보기
    cout
        << "a is at " << &a
        << ", b is at " << &b
        << endl;
        
    return 0;
}