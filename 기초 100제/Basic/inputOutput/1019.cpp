#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> // setw, setfill�� ����ϱ� ���� �߰�
using namespace std;

int main()
{
    string dateInput; // ��¥�� ���ڿ��� �Է¹��� ����
    int y, m, d; // ����, ��, ���� ������ ������ ����

    // ����ڷκ��� ��¥�� "��.��.��" �������� �Է¹���
    cin >> dateInput;

    // ���ڿ� ��Ʈ���� �̿��Ͽ� ����, ��, ���� �и�
    stringstream ss(dateInput);
    char delim; // �����ڸ� ������ ���� (�� ��� ��ħǥ '.')

    ss >> y >> delim >> m >> delim >> d; // ����, ��, ���� �����ڸ� �������� �Է¹���

    // �Է¹��� ��¥ ���, ���� ���� 2�ڸ� ���� �������� ���
    cout << setw(4) << setfill('0') << y << "."
        << setw(2) << setfill('0') << m << "."
        << setw(2) << setfill('0') << d << endl;

    return 0;
}
