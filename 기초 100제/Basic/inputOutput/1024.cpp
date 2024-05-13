#include <iostream>
using namespace std;

int main()
{
    char d[21];
    cin >> d;

    for (int i = 0; d[i] != '\0'; i++)
    {
        cout << "'" << d[i] << "'" << endl;
    }

    return 0;
}