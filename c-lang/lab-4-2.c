#include <stdio.h>

int main()
{
  int a[999] = {};
  int b = 0;
  int c;
  while (1)
  {
    scanf("%d", &c);
    if (c != 0)
    {

      a[b] = c;
      b += 1;
    }
    else
    {
      break;
    }
  }

  for (int i = 0; i < b; i++)
  {
    printf("%d = ", a[i]);
    int chn = a[i];
    int chi = 2;
    int isOut = 0;
    while (chi <= a[i])
    {
      if (chn % chi != 0)
      {
        chi += 1;
        continue;
      }
      else
      {
        if (isOut == 0)
        {
          isOut += 1;
        }
        else
        {
          printf(" * ");
        }
        printf("%d", chi);
        chn = chn / chi;
      }
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}