#include<stdio.h>
void great(const char name[],const char role[1]){
    printf("welcome %s as a %s\n",name,role);
}
int main(){
    great("Priyadarshini","data analyst");
    return 0;
}