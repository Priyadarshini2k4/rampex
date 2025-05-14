#include<stdio.h>
int main()
{
    int year=2000;
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        printf("yes leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
}