#include<stdio.h>

void f21(int n){
    int i;
    if((i=n/8) != 0)
        f21(i);
    putchar(n%8+'0');
}

int main(){
    int number;
    printf("Please input:");
    number = - 66;
    if(number < 0){
        putchar('-');
        number = -number;
    }
    f21(number);
}

