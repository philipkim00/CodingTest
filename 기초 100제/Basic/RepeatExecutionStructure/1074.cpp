#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    while (true)
    {
        if (num == 0)
        {
            break;
        }

        cout << num-- << endl;
    }

    return 0;
}