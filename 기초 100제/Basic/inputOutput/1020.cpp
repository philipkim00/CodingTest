#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> // setw, setfill�� ����ϱ� ���� �߰�
using namespace std;

int main()
{
    string socialSecurityNumber; // �ֹι�ȣ�� ���ڿ��� �Է¹��� ����
    int birthDate, genderRegionErrordetection; // ������ϰ� (����,����,��������)�� ������ ������ ����

    cin >> socialSecurityNumber; // �ֹι�ȣ �Է¹���

    // ���ڿ� ��Ʈ���� �̿��Ͽ� ������ϰ� (����,����,��������)�� �и�.
    stringstream ss(socialSecurityNumber);

    char delim; // �����ڸ� ������ ���� (�� ��� �ݷ� '-')

    ss >> birthDate >> delim >> genderRegionErrordetection; // ������ϰ� (����,����,��������)�� �����ڸ� �������� �Է¹���

    cout << setw(6) << setfill('0') << birthDate
        << setw(7) << setfill('0') << genderRegionErrordetection << endl;


    return 0;
}