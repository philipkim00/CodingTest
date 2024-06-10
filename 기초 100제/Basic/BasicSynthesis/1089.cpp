#include <iostream>
using namespace std;

int main()
{
    int a, d, n;
    cin >> a >> d >> n;

    int sum = a + (d * (n - 1));

    cout << sum;

    return 0;
}