#include <stdio.h>

int main()
{
  int a, b;
  char c[] = "";
  int d;
  while (1)
  {
    scanf("%d%d%s", &a, &b, c);
    // printf("%d %d %s\n", a, b, c);
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
    printf("\n");
    if (feof(stdin))
    {
      break;
    }
  }
  return 0;
}