#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // �ð��� 1���� ���ڿ��� �Է¹��� ����
    string time;
    // �ð�, ��, �� ������ ����
    int h, m, s;
 
    // �Ǽ� 1�� �Է¹���.
    cin >> time;

    // ���ڿ� ��Ʈ���� �̿��Ͽ� �����κа� �Ҽ��κ��� �и�.
    stringstream ss(time);

    // �����ڸ� ������ ����(�� ��� ��('.')
    char delim;

    // ���� �κа� �Ҽ��κ��� �����ڸ� �������� �Է¹޴´�.
    ss >> h >> delim >> m >> delim >> s;

    cout << m << endl;

    return 0;
}