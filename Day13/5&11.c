#include <stdio.h>
int main() {
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    if(i%5==0&&i%11==0)
    printf("yes it is % 5 and 11");
    else
    printf("Not%");
    return 0;
}