#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // 실수 1개를 문자열로 입력받을 변수
    string f1;
    // 정수부분 저장할 변수
    int num1;
    // 소수점부분 저장할 변수
    float f2;

    // 실수 1개 입력받음.
    cin >> f1;

    // 문자열 스트림을 이용하여 정수부분과 소수부분을 분리.
    stringstream ss(f1);

    // 구분자를 저장할 변수(이 경우 점('.')
    char delim;

    // 정수 부분과 소수부분을 구분자를 기준으로 입력받는다.
    ss >> num1 >> delim >> f2;

    cout << num1 << endl << f2;

    return 0;
}