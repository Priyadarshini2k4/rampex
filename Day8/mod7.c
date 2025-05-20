#include <stdio.h>
int add(int x,int y) 
{
    return x+y;
}
int sub(int x,int y) 
{
    return x-y;
}
int mul(int x,int y) 
{
    return x*y;
}
int div(int x,int y) 
{
    return x/y;
}
int main(){
    printf("%d\n",add(4,7));
    printf("%d\n",sub(5,8));
    printf("%d\n",mul(4,7));
    printf("%d\n",div(4,7));
    return 0;
}
