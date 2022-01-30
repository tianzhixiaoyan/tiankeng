//二进制转化为十进制（2-10） (输出字符)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10
 
typedef char ElemType;
typedef struct
{
    ElemType* base;
    ElemType* top;
    int stackSize;
}sqStack;
void InitStack(sqStack* s)
{
    s->base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));
    if(!s->base)
    {
        exit(0);
    }
    s->top = s->base;
    s->stackSize = STACK_INIT_SIZE;
}
void Push(sqStack* s,ElemType e)
{
    if(s->top - s->base >= s->stackSize)
    {
        s->base = (ElemType*)realloc(s->base,(s->stackSize+STACKINCREMENT)*sizeof(ElemType));
        if(!s->base)
        {
            exit(0);
        }
    }
    *(s->top) = e;
    s->top++;
}
void Pop(sqStack* s,ElemType* e)
{
    if(s->top == s->base)
    {
        return;
    }
    *e = *--(s->top);  //首先把s->top的元素赋值给e 再将地址--
}
 
int StackLen(sqStack s)  //返回栈有多少个元素
{
    return (s.top - s.base);  //  实质是地址相减 除以ElemType
}
 
int main()
{
    ElemType c; //声明一个字符c
    sqStack s;  //声明一个结构体s
 
    InitStack(&s); //初始化栈
 
    int len,i, sum = 0;
    scanf("%c",&c);
    while(c != '\n')
    {
        Push(&s,c);
        scanf("%c",&c);
    }
    len = StackLen(s);
    for(i = 0; i < len; i++)
    {
            Pop(&s,&c);
            sum = sum + (c-48)*pow(2, i);
    }
    printf("%d\n",sum);//转化为十进制数: 
    return 0;
}