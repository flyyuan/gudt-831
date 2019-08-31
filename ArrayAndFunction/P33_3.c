int main(){
    int a[5][5], i, j;
    for(i=0;i<5;i++){
        for(j=0; j<5; j++){
            if(j>i) a[i][j]=0;
            else a[i][j] = (i-j)+1;
            printf("%3d",a[i][j]);
        }
            printf("\n");
    }
}