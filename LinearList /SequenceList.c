#include<stdlib.h>
#include<stdio.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define OVERFLOW 0
#define OK 1
#define ERROR 0

//抽象数据元素类型
typedef int ElemType[LIST_INIT_SIZE];

//建立顺序表结构体
typedef struct
{
    ElemType elem;//顺序表元素
    int length;//当前长度
    int listsize;//所分配的内存空间
}SqList;

//初始化顺序表
int Init_SqList(SqList *L){
    L->length = 0;//初始化长度为0
    L->listsize = LIST_INIT_SIZE;//初始化空间大小为100
    return OK;
}

// 插入元素 参数：链表指针,位置,元素内容
int Insert_SqList(SqList *L, int i, int x){
    int * q;
    int * p;
    if(i < 1 || i > L->length+1) return ERROR; //插入位置不合法
    if(L->length >= L->listsize) return OVERFLOW; //空间已满
    q = &(L->elem[i-1]); //插入表位置的地址
    // 把插入位置之后的元素往后移动
    for(p = &(L->elem[L->length-1]); p>= q; --p){
        *(p+1) = *p;
    }
    *q = x; // 插入元素x
    ++L->length;
    return OK;
}

// 删除元素 参数:链表指针,位置
int Delete_SqList(SqList *L,int i){
    int *p;
    int *q;
    int e;
    if((i<1)|| (i > L->length)) return ERROR;
    p = &(L->elem[i-1]);
    e = *p;
    q = L->elem + L->length-1;
    for(++p; p<=q;++p) //就是把右边的元素往又移动，这步是核心，
        *(p-1) = *p;
    --L->length;
    return OK;
}

int main(){
    SqList sqList;
    Init_SqList(&sqList);
    Insert_SqList(&sqList, 1, 1);
    Insert_SqList(&sqList, 2, 2);
    Insert_SqList(&sqList, 1, 3);
    Delete_SqList(&sqList,2);
}
