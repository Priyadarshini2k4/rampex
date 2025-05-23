#include <stdio.h>
int lcm(int a,int b){
    if(b==0)return a;
    return lcm(b,a/b);
}
int main() {
    printf("%d",lcm(2,4));
    return 0;
}