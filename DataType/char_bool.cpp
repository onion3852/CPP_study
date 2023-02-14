#include <iostream>

using namespace std;

int main() {
    // char : 문자형
    // 작은 따옴표 안에 있는 문자를 대입
    // C++에서는 큰 따옴표를 이용해 문자형 선언 불가
    // C++에서는 " " 안에 null문자(\0)가 포함되어 있음
    //따라서 char "a" 와 같이 쓰면 a와 \0을 같이 선언하려는 것이기 때문에 불가
    char f = 'a';
    cout << "f is " << f << endl;

    // bool : 0(false) 또는 1(true)
    // bool type에 저장하는 0아닌 수는 모두 1로 인식
    bool a = 0;
    bool b = 1;
    bool c = 6;

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;

    return 0;
}