#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // �Ǽ� 1���� ���ڿ��� �Է¹��� ����
    string f1;
    // �����κ� ������ ����
    int num1;
    // �Ҽ����κ� ������ ����
    float f2;

    // �Ǽ� 1�� �Է¹���.
    cin >> f1;

    // ���ڿ� ��Ʈ���� �̿��Ͽ� �����κа� �Ҽ��κ��� �и�.
    stringstream ss(f1);

    // �����ڸ� ������ ����(�� ��� ��('.')
    char delim;

    // ���� �κа� �Ҽ��κ��� �����ڸ� �������� �Է¹޴´�.
    ss >> num1 >> delim >> f2;

    cout << num1 << endl << f2;

    return 0;
}