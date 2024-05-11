#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> // setw, setfill을 사용하기 위해 추가
using namespace std;

int main()
{
    string dateInput; // 날짜를 문자열로 입력받을 변수
    int y, m, d; // 연도, 월, 일을 저장할 정수형 변수

    // 사용자로부터 날짜를 "년.월.일" 형식으로 입력받음
    cin >> dateInput;

    // 문자열 스트림을 이용하여 연도, 월, 일을 분리
    stringstream ss(dateInput);
    char delim; // 구분자를 저장할 변수 (이 경우 마침표 '.')

    ss >> y >> delim >> m >> delim >> d; // 연도, 월, 일을 구분자를 기준으로 입력받음

    // 입력받은 날짜 출력, 월과 일을 2자리 숫자 형식으로 출력
    cout << setw(4) << setfill('0') << y << "."
        << setw(2) << setfill('0') << m << "."
        << setw(2) << setfill('0') << d << endl;

    return 0;
}
