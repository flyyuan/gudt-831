#include <stdio.h>
#include <stdlib.h>
#define flag 0

typedef int ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;
LinkList L;

// 头插法，在链表头部插入节点建立单链表-->每个新元素都插到最前面，然后把旧链放在新元素的next
LinkList CreateListF()
{
    LinkList L = NULL;
    LNode *s;
    int x;
    scanf("%d", &x);
    while (x != flag)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L;
        L = s; // L指向新的头节点s
        scanf("%d", &x);
    }
    return L;
}

// 尾插法，在单链表尾部插入节点建立单链表->每个新元素都插到链表最后一个元素的next
LinkList CreateListR()
{
    LinkList L = NULL;
    LNode *s, *r = NULL;
    int x;
    scanf("%d", &x);
    while (x != flag)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        if (L == NULL)
            L = s; //头节点地址，不能动
        else
            r->next = s;
        r = s; // r指向新的尾节点s
        scanf("%d", &x);
    }
    if (r != NULL)
        r->next = NULL;
    return L;
}

//带头节点的尾插法
LinkList CreateListRByL()
{
    LinkList L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;
    LNode *s, *r = L;
    int x;
    scanf("%d", &x);
    while (x != flag)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

// 插入运算


int main()
{
    LinkList fLinkList;
    fLinkList = CreateListRByL();
}