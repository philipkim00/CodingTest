#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    // Convert hex string to integer
    int n = stoi(input, nullptr, 16);

    // hex format with uppercase
    cout << hex << uppercase;  // Setting the output to hexadecimal format with uppercase

    for (int i = 1; i < 16; ++i)
    {
        cout << input << "*" << i << "=" << n * i << endl;
    }
    return 0;
}