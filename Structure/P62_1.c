#include <stdio.h>

struct
LINE{
    int color;
    char Layer[32];
    float x[2];
    float y[2];
};
struct LINE L1[10], *L2;
main()
{
    int i, j;
    L2 = L1;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 2; j++)
            scanf("%f, %f", &L1[i].x[j],&L1[i].y[j]);
}