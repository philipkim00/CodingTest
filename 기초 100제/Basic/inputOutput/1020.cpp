#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> // setw, setfill을 사용하기 위해 추가
using namespace std;

int main()
{
    string socialSecurityNumber; // 주민번호을 문자열로 입력받을 변수
    int birthDate, genderRegionErrordetection; // 생년월일과 (성별,지역,오류검증)을 저장할 정수형 변수

    cin >> socialSecurityNumber; // 주민번호 입력받음

    // 문자열 스트림을 이용하여 생년월일과 (성별,지역,오류검증)을 분리.
    stringstream ss(socialSecurityNumber);

    char delim; // 구분자를 저장할 변수 (이 경우 콜론 '-')

    ss >> birthDate >> delim >> genderRegionErrordetection; // 생년월일과 (성별,지역,오류검증)을 구분자를 기준으로 입력받음

    cout << setw(6) << setfill('0') << birthDate
        << setw(7) << setfill('0') << genderRegionErrordetection << endl;


    return 0;
}