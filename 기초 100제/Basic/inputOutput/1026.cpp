#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // 시간을 1개를 문자열로 입력받을 변수
    string time;
    // 시간, 분, 초 저장할 변수
    int h, m, s;
 
    // 실수 1개 입력받음.
    cin >> time;

    // 문자열 스트림을 이용하여 정수부분과 소수부분을 분리.
    stringstream ss(time);

    // 구분자를 저장할 변수(이 경우 점('.')
    char delim;

    // 정수 부분과 소수부분을 구분자를 기준으로 입력받는다.
    ss >> h >> delim >> m >> delim >> s;

    cout << m << endl;

    return 0;
}