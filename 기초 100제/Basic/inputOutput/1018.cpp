#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    string timeInput; // �ð��� ���ڿ��� �Է¹��� ����
    int h, m; // �ð��� ���� ������ ������ ����

    cin >> timeInput; // ���ڿ��� �ð��� �Է¹���

    // ���ڿ� ��Ʈ���� �̿��Ͽ� �ð��� ���� �и�
    stringstream ss(timeInput);

    char delim; // �����ڸ� ������ ���� (�� ��� �ݷ� ':')

    ss >> h >> delim >> m; // �ð��� ���� �����ڸ� �������� �Է¹���

    cout << h << ":" << m << endl; // �Է¹��� �ð� ���

    return 0;
}