//������ת��Ϊʮ���ƣ�2-10�� (����ַ�)
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
    *e = *--(s->top);  //���Ȱ�s->top��Ԫ�ظ�ֵ��e �ٽ���ַ--
}
 
int StackLen(sqStack s)  //����ջ�ж��ٸ�Ԫ��
{
    return (s.top - s.base);  //  ʵ���ǵ�ַ��� ����ElemType
}
 
int main()
{
    ElemType c; //����һ���ַ�c
    sqStack s;  //����һ���ṹ��s
 
    InitStack(&s); //��ʼ��ջ
 
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
    printf("%d\n",sum);//ת��Ϊʮ������: 
    return 0;
}