#include<stdio.h>
int main()
{
    int a=0,b=5,c;
    for(int i=0;i<=1;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}