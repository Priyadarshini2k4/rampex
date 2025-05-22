#include<stdio.h>
int divisors(int a,int b){
    int result=1;
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    printf("%d",result);
     return result;
}
    int main(){
        divisors(4,2);
    }
 result;
