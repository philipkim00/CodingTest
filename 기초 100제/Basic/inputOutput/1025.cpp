#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;  // 전체 숫자를 문자열로 입력받음

    int a = input[0] - '0';  // 각 문자를 int로 변환
    int b = input[1] - '0';
    int c = input[2] - '0';
    int d = input[3] - '0';
    int e = input[4] - '0';

    cout << "[" << a * 10000 << "]\n";
    cout << "[" << b * 1000 << "]\n";
    cout << "[" << c * 100 << "]\n";
    cout << "[" << d * 10 << "]\n";
    cout << "[" << e << "]\n";

    return 0;
}