#include <stdio.h>
int main()
{
    int i, x[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1}, *p = &x[1][1];
    for (i = 0; i < 4; i += 2){
        printf("%d",p[i]);
    }
}