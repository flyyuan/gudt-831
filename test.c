main(){
    int s[][2] = { {1,2}, {3,4}}, (*p)[2];
    p = s;
    printf("%p\n", *(p+1));
    printf("%p\n", &s[1][1]);
}