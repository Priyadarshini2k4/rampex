#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter an integer:");
    scanf("%d",&num);
    printf("multiplication table of %d:\n,num");
    for(int i=2;i<=20;i++){
         printf("%d*%d*%d\n",num,i,num*i);
    }
    return 0;
}