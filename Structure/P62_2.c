#include<stdio.h>
int main(){
    struct LINE{
        int color;
        char Layer[32];
        float x[2];
        float y[2];
    };
    struct LINE LP[2] = {{1,"B",2.2,3.3},{2,"c",1.1,4.4}};
    printf("%d",LP[1].color);
}