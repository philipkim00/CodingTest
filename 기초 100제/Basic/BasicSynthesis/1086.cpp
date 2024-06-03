#include <stdio.h>

int main()
{
    float w, h, b;
    scanf_s("%f %f %f", &w, &h, &b);

    float bit = w * h * b;
    float byte = bit / 8;
    float kbyte = byte / 1024;
    float mbyte = kbyte / 1024;

    printf("%0.2f MB", mbyte);

    return 0;
}