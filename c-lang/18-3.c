#include <stdio.h>

void vowel()
{
  printf("It is a vowel.");
}

int main()
{
  char a;
  scanf("%c", &a);
  switch (a)
  {
  case 'a':
    vowel();
    break;
  case 'e':
    vowel();
    break;
  case 'i':
    vowel();
    break;
  case 'o':
    vowel();
    break;
  case 'u':
    vowel();
    break;
  default:
    printf("It is not a vowel.");
  }
  return 0;
}