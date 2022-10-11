#include <stdio.h>

int main()
{
  int a, b, d, n = 0;
  char c[] = "";
  while (1)
  {
    if (feof(stdin))
    {
      break;
    }
    if (n != 0)
    {
      printf("\n");
    };
    scanf("%d%d%s", &a, &b, c);
    switch (a)
    {
    case 1:
      for (int i = 0; i < b; i++)
      {
        for (int j = 0; j <= i; j++)
        {
          printf("%s", c);
        }
        printf("\n");
      }
      break;
    case 2:
      for (int i = b; i >= 0; i--)
      {
        for (int j = 0; j < b - i; j++)
        {
          printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
          printf("%s", c);
        }

        printf("\n");
      }
      break;
    case 3:
      for (int i = 0; i < b; i++)
      {
        for (int j = 0; j < b; j++)
        {
          printf("%s", c);
        }
        printf("\n");
      }
      break;
    }
    n += 1;
  }
  return 0;
}