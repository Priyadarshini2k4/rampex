#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int *start=arr;
    int *end=arr+n-1;
    int temp;
    while (start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }    
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
    }
