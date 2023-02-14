#include <iostream>

using namespace std;

int main() {
    // + - * %
    // 두 피연산자가 모두 정수일 때, %는 나머지, /는 몫을 계산
    // 
    int a = 10;
    int b = 3;

    int c = a + b;    
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;    
    cout << "f = " << f << endl;
    cout << "g = " << g << endl;



    // 두 피연산자 중 하나라도 부동소수점 수(실수)이면
    // 계산 결과는 어떻게 될까?
    float x = 2.6;
    int   y = 5;

    cout << "x / y = " << x / y << endl;
    // 실수형으로 계산된다.



    // Data Type : auto
    // 값에 적절한 변수형을 자동으로 설정시킴
    auto n = 100;       // to int
    auto t = 1.5;       // to float
    auto s = 1.3e12L;   // to long long

    return 0;
}