#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int cnt = 0;
    int a, b, c;
    cin >> a >> b >> c;

    // Use a stringstream to collect all the output and print it at once
    stringstream output;

    for (int index = 0; index < a * b * c; ++index)
    {
        int i = index / (b * c);
        int j = (index / c) % b;
        int k = index % c;
        output << i << " " << j << " " << k << "\n";
        ++cnt;
    }

    // Output the collected results
    cout << output.str();
    cout << cnt << endl;

    return 0;
}