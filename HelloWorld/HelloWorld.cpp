#include <iostream>
// 전처리기

using namespace std;
// 본래 함수 앞에 std::cout 그리고 std::endl 과 같이 써야하는데
// 이 과정을 단순화 하기 위한 설정이라고 보면 된다.

int main() {

    cout << "Hello World!" << endl;
    // cout은 출력을 담당
    // endl은 줄바꿈을 담당
    // 꺽쇠(<<)는 데이터의 흐름이라 이해할 수 있는데,
    // 위에서 hello world를 cout을 통해 출력하라는 의미정도로 이해할 수 있음

    return 0;
}