//���ʮ����ת��Ϊ�����ƣ�32-2�� (�������)
#include <iostream>
#include <stdio.h>
using namespace std;
void transform(int a)
{
    int x[8]={0};
    int *p=x,n=0;//n���������������ʵ�ʳ���
    while(a!=0)
    {
        *p=a%2;
        p++;n++;
        a/=2;
    }
    if(p<x+7)
    {//�����������ռ����8λ
        for(int i=n;i<8;i++)//ǰ�油��
            cout<<0;
        for(int i=n-1;i>=0;i--)//�������
            cout<<x[i];
    }
    else
        for(int i=7;i>=0;i--)
        cout<<x[i];
}
int main()
{
    int a,b,c,d;
    scanf("%d.%d.%d.%d/32",&a,&b,&c,&d);//�������ݵĸ�ʽ���ĸ������ŵ�ʮ����������Ӣ�ĵ����
    if((a>255||a<0)||(b>255||b<0)||(c>255||c<0)||(d>255||d<0))
    {
        cout<<"data error";
        return 0;
    }
    else
    {    transform(a);
         transform(b);
         transform(c);
         transform(d);
    }
    return 0;
}

