#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 1;

    for (int i = 0; i < n; i++)
    {
        sum += i;

        if (sum >= n)
        {
            break;
        }
    }

    cout << sum;

    return 0;
}