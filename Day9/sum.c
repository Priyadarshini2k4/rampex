#include<stdio.h>
int divisors(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return sum;
}
    int main(){
        divisors(6);
        return 0;
    }

