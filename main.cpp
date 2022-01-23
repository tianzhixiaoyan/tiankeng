#include<iostream>
#include<cstdio>
using namespace std;
int transform(char a[32])//转变32位
{
    for(i=0;i<8;i++)
{
if(a[i]=='1')
b[0]+=erdn[i];
}
for(i=8;i<16;i++ )
{
if(a[i]=='1')
b[1]+=erdn[i-8];
}
for(i=16;i<24;i++)
{
if(a[i]=='1')
b[2]+=erdn[i-16];
}
for(i=24;i<32;i++)
{
if(a[i]=='1')
b[3]+=erdn[i-24];
}
for(i=0;i<4;i++)
{
printf("%d",b[i]);
if(i%1==0&&i<3)
printf(".");
}
}
int sort()//查找,找到返回，找不到返回-1
{
}
void pdput()//输入（rule）
{
    freopen("rule1.txt","r",stdin);
    char rrootip[20],rgoalip[20];//IP地址（点分十进制）
    long long rleft,rright;//端口
    long long rlefttyp,rrighttyp;//协议号范围
}
void put()//输入（packet）
{
    long long prootip,pgoalip;//IP地址（十进制）
    long long pleft,pright;//端口
    long long ptyp;//协议号
}

int main()
{
    
    put();

    return 0;
}