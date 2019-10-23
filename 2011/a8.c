#include<stdio.h>
int func(int x){
    if(!(x<0||x>1)){
        return 3;
    }
    int y = x - func(x-2);
    return y;
}
int main(){
    printf("%d\n", func(9));
}