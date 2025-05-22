#include<stdio.h>
void fibbo(int n)
{
    int a=0,b=1,temp;
    for(int i=0;i<5;i++){
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
    }
}
