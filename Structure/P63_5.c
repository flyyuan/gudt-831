#include <stdlib.h>
#include <stdio.h>
int main()
{
    double *p;
    printf("%p\n", p);
    p = (double *)malloc(3 * sizeof(double));
    p[0] = 1.5;
    p[1] = 2.5;
    p[2] = 3.5;
    printf("%f,%f,%f\n", p[0], p[1], p[2]);
    free(p);
    printf("%p", p);
}

// 使用malloc(长度)动态分配内存长度
/*使用free(指针)释放内存，free执行之后不是马上释放，而是虚拟内存上做标记，
 等待操作系统去操作物理地址释放。所以free之后仍然可以访问该指针的内容和地址*/