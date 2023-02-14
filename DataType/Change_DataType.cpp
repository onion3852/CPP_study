#include <iostream>

using namespace std;

int main() {
    // 데이터형 변환
    // 특정 데이터형 변수에 다른 데이터형의 값을 대입한다면?
    int a = 3.141592;
    cout << a << endl;
    // 소수부분이 절삭되어 저장됨

    
    // 강제로 데이터형을 변환하는 방법
    // typeName(a)
    // (typeName)a
    char ch = 'M';
    cout << (int)ch << "  " << int(ch) << endl;
    // 대문자 M에 해당하는 아스키코드를 출력함

    // static_cast<typeName>(a) 도 같은 결과를 얻을 수 있지만
    // 세부적인 차이가 있음
    // 추후에 배움 
    cout << static_cast<int>(ch) << endl;
    
    return 0;
}