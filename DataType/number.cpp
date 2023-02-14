#include <iostream>
#include <climits>

using namespace std;

int main() {
    // 정수형 : 소소부가 없는 수
    // short, int, long, long long

    // 상수로 정의되어있는 각 자료형의 maximum value를 이용
    int       n_int   = INT_MAX;
    short     n_short = SHRT_MAX;
    long      n_long  = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "int의 최대크기는 " << n_int << " 이다." << endl;
     
    cout << "short는 " << sizeof n_short << "바이트이다." << endl;
    cout << "short의 최대크기는 " << n_short << " 이다." << endl;
    
    cout << "long은 " << sizeof n_long << "바이트이다." << endl;
    cout << "long의 최대크기는 " << n_long << " 이다." << endl;
    
    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "long long의 최대크기는 " << n_llong << " 이다." << endl;    


    cout << endl;
    // 만약 자료형 앞에 unsigned를 추가한다면 음의 정수는 저장하지 않게 되므로
    // 그냥(signed) 자료형 보다, 저장 가능한 최대 값이 증가하게 된다.
    unsigned int n_un_int = UINT_MAX;
   
    cout << "int의 최대크기는 " << n_int << " 이다." << endl;
    cout << "unsigned int의 최대크기는 " << n_un_int << " 이다." << endl;


    // 실수형은 소수부가 있는 수
    // data type은 "float"
    float a = 3.14;
    int   b = 3.14;

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    // b는 int 이므로 소수부는 저장되지 않고 정수부만 저장된다.
    
    return 0;
}