#include<stdio.h>

int main(){
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float (*p)[4];
    int n,i;
    p = score;
    printf("\nPlease input number:");
    scanf("%d",&n);
    printf("The score for %d stduent:\n",n);
    for(i = 0; i < 4; i ++){
        printf("%5.1f\n", *(*(p+n-1)+i));
    }
}

// 考察数组指针   *(array+i) == array[i]
//              *(*(array+i)+j) == array[i][j]