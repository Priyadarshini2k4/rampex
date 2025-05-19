#include <stdio.h>

int main() {
    int arr[]={5,9,7,34,6};
    int temp;
    for(int i=5;i>0;i--){
        for(int j=i-1;j>0;j--){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
             for(int i=5;i>0;i--)
             {
            printf("%d\t",arr[i]);
        }
    return 0;
}