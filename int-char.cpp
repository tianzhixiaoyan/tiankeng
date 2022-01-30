#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[40];
    char b[40];
    int i=0;
    while((scanf("%d",&a[i]))!=0)
    {
        if(a[i]==1)
        b[i]='1';
        else
        b[i]='0';
        i++;
    }
    printf("%s",b);
    return 0;
}