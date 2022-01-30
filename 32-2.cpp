//点分十进制转换为二进制（32-2） (输出数字)
#include <iostream>
#include <stdio.h>
using namespace std;
void transform(int a)
{
    int x[8]={0};
    int *p=x,n=0;//n用来计算二进制数实际长度
    while(a!=0)
    {
        *p=a%2;
        p++;n++;
        a/=2;
    }
    if(p<x+7)
    {//如果二进制数占不满8位
        for(int i=n;i<8;i++)//前面补零
            cout<<0;
        for(int i=n-1;i>=0;i--)//逆序输出
            cout<<x[i];
    }
    else
        for(int i=7;i>=0;i--)
        cout<<x[i];
}
int main()
{
    int a,b,c,d;
    scanf("%d.%d.%d.%d/32",&a,&b,&c,&d);//输入数据的格式是四个带符号的十进制数，用英文点隔开
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

