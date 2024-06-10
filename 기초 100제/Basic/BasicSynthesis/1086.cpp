#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int w, h, b;
    cin >> w >> h >> b;

    float bit = w * h * b;
    float byte = bit / 8;
    float kbyte = byte / 1024;
    float mbyte = kbyte / 1024;
    
    // mbyte = (int)(mbyte * 100.f + 0.5f) / 100.f;

    cout << fixed << setprecision(2) << mbyte << " MB" << endl;

    return 0;
}