#include <iostream>

using namespace std;

int main() {
    // 원의 넓이를 구하는 프로그램
    // 넓이 = 반지름 * 반지름 * 파이

    int r = 3;  // 반지름
    float s = r * r * 3.14;
    cout << "s = " << s << endl;

    // 파이를 상수로 지정하여 이용
    // const <data type> NAME = value;
    const float PI = 3.141592;
    int r2 = 4;
    float s2 = r2 * r2 * PI;
    cout << "s2 = " << s2 << endl; 
    
    return 0;

}