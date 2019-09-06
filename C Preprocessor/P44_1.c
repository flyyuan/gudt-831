#define PT 5.5
#define S(x) PT *x *x
main(){
    int a = 1, b =2;
    printf("%4.1f\n",S(a+b));
}

/*
宏展开是在预处理阶段完成的，这个阶段把替换文本只是看作一个字符串，
并不会有任何的计算发生，在展开时是在宏x出现的地方 只是简单地来代替x，并不会增添任何的符号
宏在编译时展开，直接替换掉了。
而不是运行时计算了a+b后再S(a+b)
代码相当于下面代码:
#include<stdio.h>
 #define PT 3.5
 #define S(x) PT*x*x
 main()
 {
 int a=1,b=2;
 printf("%4.1f\n",PT*a+b*a+b);
 }
*/