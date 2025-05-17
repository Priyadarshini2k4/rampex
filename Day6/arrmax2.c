#include<stdio.h>
int main()
{
    int max=0;
    int array[]={3,6,8,99};
    for(int i=0;i<4;i++)
        if(array[i]>max)
        {
            max=array[i];
        }
    printf("%d\n",max);
    return 0;
}
