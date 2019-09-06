#include <stdio.h>
int GetBit(unsigned char c, int m)
{
    return (0x01 & c >> m);
}
int main()
{
    printf("%d,%d\n", GetBit("H", 3), GetBit("H", 5));
}