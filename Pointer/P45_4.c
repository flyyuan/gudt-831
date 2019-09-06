#include<stdio.h>

int main(){
    int a[5] = {2,4,6,8,10}, *p,**k;
    p=a;
    k=&p;
    printf("%d\n",*(p++)); 
    // *(p++); p先赋值给取值符，然后再自增
    printf("%d\n",**k);
    // **k; 指针*k的值是p的地址, **k则是p地址的值
    }