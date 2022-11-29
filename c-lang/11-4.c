#include <stdio.h>
#include <ctype.h>

int main()
{
  char c;
  int alphabet = 0, number = 0;
  char az[200];
  int i = 0;
  while (scanf("%c", &c) != EOF)
  {
    if (isalpha(c))
    {
      alphabet += 1;
      if (isupper(c))
      {
        az[i] = tolower(c);
      }
      else
      {
        az[i] = toupper(c);
      }
    }
    else // if (isdigit(c))
    {
      if (isdigit(c))
      {
        number += 1;
      }
      az[i] = c;
    }
    i += 1;
  }

  printf("%sAlphabet = %d, Number = %d", az, alphabet, number);
  return 0;
}