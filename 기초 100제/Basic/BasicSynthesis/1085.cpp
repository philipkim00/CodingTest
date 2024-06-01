#include <iostream>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

int main()
{
    float h, b, c, s;
    cin >> h >> b >> c >> s;

    // Calculate the size in bits, bytes, kilobytes, and megabytes
    double bit = static_cast<double>(h) * b * c * s;
    double byte = bit / 8;
    double kbyte = byte / 1024;
    double mbyte = kbyte / 1024;

    // Set the output format to fixed-point notation and precision to 2 decimal places
    cout << fixed << setprecision(1) << mbyte << " MB" << endl;

    return 0;
}