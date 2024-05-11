#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    string timeInput; // 시간을 문자열로 입력받을 변수
    int h, m; // 시간과 분을 저장할 정수형 변수

    cin >> timeInput; // 문자열로 시간을 입력받음

    // 문자열 스트림을 이용하여 시간과 분을 분리
    stringstream ss(timeInput);

    char delim; // 구분자를 저장할 변수 (이 경우 콜론 ':')

    ss >> h >> delim >> m; // 시간과 분을 구분자를 기준으로 입력받음

    cout << h << ":" << m << endl; // 입력받은 시간 출력

    return 0;
}