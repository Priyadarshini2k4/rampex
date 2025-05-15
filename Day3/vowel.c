#include<stdio.h>
#include<ctype.h>
int main() {
  char character;
  printf("Enter a character: ");
  scanf("%c", &character);
  character = tolower(character);
  if (isalpha(character))
  {
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') 
    {
      printf("%c is a vowel.\n", character);
    }
    else
    {
      printf("%c is a consonant.\n", character);
    }
  } 
  else
  {
    printf("Invalid input. Please enter an alphabet.\n");
  }
  return 0;
}