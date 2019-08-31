main(){
    char str[] = "I_love_this_game", *p;
    int a;
    p = &str[0];
    a = sizeof(p);
    printf("%d,%d,%d\n",sizeof(str),sizeof(p),strlen(p));
    // 考察sizeof()和strlen()
}