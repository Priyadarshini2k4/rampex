#include<stdio.h>
int main()
{
    int min;
    int array[]={3,6,8,99};
    for(int i=0;i<4;i++)
        if(array[i]<min)
        {
            min=array[i];
        }
    printf("%d\n",min);
    return 0;
}
