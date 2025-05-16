#include <stdio.h>
int main() 
{
  int num=2;
  printf("Even numbers between o and 50:");
  while (num<=50){
   printf("%d",num);
   num+=2;
  }
  printf("\n");
  return 0;
}