#include<stdio.h>
int main(){
    int arr[]={6,9,8,3,5};
    int *ptr=arr;
    for(int i=0;i<5;i++){
    printf("%d\n",*(ptr+i));
    }
    return 0;
}