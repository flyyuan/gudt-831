#include<stdio.h>

// 一个简单的单项链表

struct doctor
{
    int x,y;
    float rate;
    struct doctor *p;    
}a,b;

int main(){
    a.x=0;a.y=0;a.rate=0;a.p=&b;
    b.x=2;b.y=2;b.rate=2;b.p=NULL;
    printf("%f",a.p->rate);
}

// 箭头操作符"->",操作结构体指针的内容
// 链表就是通过指针形成线性结构（就是串联携带地址），通过移动到下一个指针节点访问数据
