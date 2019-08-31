main()
{
    int i,j,k,a[3][3], *p;
    for(i = 0; i < 3; i++)
    for(j=0;j<3;j++)a[i][j] = 1+j+i*3;
    p = &a[1][1];
    while(j){
        k = p[j];
        printf("%d",p[j]);
        j--;
    }
    // 考察二维数组指针http://c.biancheng.net/view/227.html
}