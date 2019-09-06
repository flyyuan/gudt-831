#include <stdio.h>
int f(char *s)
{
    char *p = s;
    while (*p != '\0')
    {
        p++;
    }
    return (p - s);
    // 用指针实现：字符串的头地址和尾地址相减得到字符串的长度，16进制
}
int main()
{
    printf("%d\n", f("goodbye!"));
    // 使用%d，输出自动从16进制转为10进制
}