#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two values x,y:");
    scanf("%d%d",&x,&y);
    printf("Before swapping:x=%d,y=%d\n",x,y);
    x=y;
    y=x;
    printf("After swapping:x=%d,y=%d\n",x,y);
    return 0;
} 